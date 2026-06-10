/**
*    author:  Ryo
*    created: 11.04.2026 20:55:02
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double pos = 0.5;
    int n; cin >> n;
    vector<int> l(n);
    for(int i=0; i<n; i++) cin >> l[i];

    int cnt = 0;

    vector<vector<set<long double>>> dp(21, vector<set<long double>>(21));
    dp[0][0].insert(pos);

    for(int i=0; i<n; i++){
        for(int j=0; j<20; j++){
            if(dp[i][j].empty()) continue;

            for(long double pos : dp[i][j]){
                if(l[i]>pos){
                    dp[i+1][j+1].insert(l[i]-pos);
                }else{
                    dp[i+1][j].insert(pos-l[i]);
                }

                if(l[i]+pos<inf) dp[i+1][j].insert(l[i]+pos);
            }

        }
    }

    for(int i=20; i>-1; i--){
        if(!dp[20][i].empty()){
            cnt = i;
            break;
        }
    }

    cout << cnt << endl;
    
    return 0;
}