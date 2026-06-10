/**
*    author:  Ryo
*    created: 11.04.2026 20:55:09
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

// lastMove 移動なし: -1
struct P{
    int x;
    int y;
    int lastMove;
    
    P(){
        x = -1;
        y = -1;
        lastMove=-1;
    }
    
    P(int a, int b){
        x = a;
        y = b;
        lastMove=-1;
    }

    P(int a, int b, int c){
        x = a;
        y = b;
        lastMove = c;
    }
};

P operator+(const P& a, const P& b){
    return P(a.x+b.x, a.y+b.y, a.lastMove);
}

const vector<P> dxy = {P(1, 0), P(0, -1), P(-1, 0), P(0, 1)};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, w; cin >> h >> w;
    vector<string> mp(h); 
    vector<vector<int>> dist(h, vector(w, inf));
    for(int i=0; i<h; i++) cin >> mp[i];

    P s, g;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(mp[i][j]=='S'){
                s = P(i, j, -1);
                break;
            }

            if(mp[i][j]=='G'){
                g = P(i, j, -1);
            }
        }

        if(s.x!=-1 && g.x!=-1) break;
    }

    queue<P> q; q.push(s);
    dist[s.x][s.y] = 0;

    while(!q.empty()){
        P pos = q.front(); q.pop();

        if(mp[pos.x][pos.y]=='O'){
            P nex = pos + dxy[pos.lastMove];

            if(nex.x<0 || nex.x>=h || nex.y<0 || nex.y>=w) continue;
            if(dist[nex.x][nex.y]!=inf) continue;

            if(mp[nex.x][nex.y]!='x'){
                q.push(nex);
            }

            continue;
        }

        for(int i=0; i<4; i++){
            if(mp[pos.x][pos.y]=='X' && pos.lastMove==i) continue;
            P nex = pos+dxy[i];

            if(nex.x<0 || nex.x>=h || nex.y<0 || nex.y>=w) continue;
            if(dist[nex.x][nex.y]!=inf) continue;

            if(mp[nex.x][nex.y]!='x'){
                nex.lastMove = i;
                q.push(nex);
            }
        }
    }

    if(dist[g.x][g.y]==inf){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
        // string s;
        // vector<char> which = {'D', 'R', 'U', 'L'};
        // P pos = g;
        // while(mp[pos.x][pos.y]!='S'){
        //     for(int i=0; i<4; i++){
        //         P nex = pos + nex;

        //         if(nex.x<0 || nex.x>=h || nex.y<0 || nex.y>=w) continue;
        //         if(dist[pos.x][pos.y] == dist[nex.x][nex.y]+1){
        //             pos = nex;
        //             s.push_back(which[i]);
        //             break;
        //         }

        //     }
        // }

        // reverse(s.begin(), s.end());

        // cout << "Yes" << endl << s << endl;
    }



    
    return 0;
}