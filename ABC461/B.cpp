/**
*    author:  Ryo
*    created: 06.06.2026 17:43:54
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
    vector<vector<int>> ab(2, vector(n+1, 0));
    for(int i=1; i<n+1; i++) cin >> ab[0][i];
    for(int i=1; i<n+1; i++){
        int tmp; cin >> tmp;
        ab[1][tmp] = i;
    }

    for(int i=1; i<n+1; i++){
        if(ab[0][i]!=ab[1][i]){
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    
    return 0;
}