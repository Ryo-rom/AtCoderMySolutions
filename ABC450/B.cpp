/**
*    author:  Ryo
*    created: 21.03.2026 17:00:51
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    vector<vector<int>> cost(n, vector(n+1, 0));
    for(int i=1; i<n; i++){
        for(int j=i+1; j<n+1; j++){
            cin >> cost[i][j];
        }
    }

    for(int a=1; a<n-1; a++){
        for(int c=a+2; c<n+1; c++){
            int oneCost = cost[a][c];
            for(int b=a+1; b<c; b++){
                int totalCost = cost[a][b] + cost[b][c];
                if(totalCost<oneCost){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    
    return 0;
}