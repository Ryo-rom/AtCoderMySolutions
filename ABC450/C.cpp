/**
*    author:  Ryo
*    created: 21.03.2026 17:01:00
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int h, w;

vector<vector<int>> thisMap;

void Labeling(int n, int x, int y){
    thisMap[x][y] = n;
    if(y-1>=0){
        if(thisMap[x][y-1]==inf){
            Labeling(n, x, y-1);
        }
    }

    if(y+1<w){
        if(thisMap[x][y+1]==inf){
            Labeling(n, x, y+1);
        }
    }

    if(x-1>=0){
        if(thisMap[x-1][y]==inf){
            Labeling(n, x-1, y);
        }
    }

    if(x+1<h){
        if(thisMap[x+1][y]==inf){
            Labeling(n, x+1, y);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> h >> w;
    thisMap = vector(h, vector<int>(w, inf));
    
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++) {
            char c; cin >> c;
            if(c=='#') thisMap[i][j] = 0;
        }
    }

    int label = 0;
    set<int> walls;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(thisMap[i][j]==inf){
                label++;
                Labeling(label, i, j);
            }
        }
    }

    for(int i=0; i<h; i++){
        if(thisMap[i][0]!=0){
            walls.insert(thisMap[i][0]);
        }
        if(thisMap[i][w-1]!=0){
            walls.insert(thisMap[i][w-1]);
        }
    }

    for(int j=1; j<w-1; j++){
        if(thisMap[0][j]!=0){
            walls.insert(thisMap[0][j]);
        }

        if(thisMap[h-1][j]!=0){
            walls.insert(thisMap[h-1][j]);
        }
    }

    cout << label - walls.size() << endl;
    
    return 0;
}