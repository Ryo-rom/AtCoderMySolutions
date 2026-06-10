/**
*    author:  Ryo
*    created: 06.06.2026 17:44:13
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, w, k; cin >> h >> w >> k;
    vector<vector<int>> mp(h+1, vector(w+1, 0));
    for(int i=1; i<=h; i++){
        string s; cin>> s;
        for(int j=0; j<w; j++){
            mp[i][j+1] = (s[j] - '0') + mp[i][j];
        }
    }

    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            mp[i][j] += mp[i-1][j];
        }
    }

    ll ans = 0L;

    for(int a=1; a<=h; a++){
        for(int b=1; b<=w; b++){
            for(int c=a; c<=h; c++){
                for(int d=b; d<=w; d++){
                    int sum = mp[c][d] + mp[a-1][b-1] - mp[c][b-1] - mp[a-1][d];

                    if(sum==k) {
                        ans++;
                    }else if(sum>k){
                        break;
                    }
                }
            }
        }
    }

    cout << ans << endl;


    
    return 0;
}