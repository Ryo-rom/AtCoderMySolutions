/**
*    author:  Ryo
*    created: 27.03.2026 14:52:04
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m; cin >> n >> m;
    vector<vector<int>> now(m, vector<int>()), ny(m, vector<int>());
    for(int i=0; i<n; i++){
        int a, b; cin >> a >> b;
        a--; b--;
        now[a].push_back(i+1);
        ny[b].push_back(i+1);
    }

    for(int i=0; i<m; i++){
        cout << (int)(ny[i].size()-now[i].size()) << endl;
    }
    
    return 0;
}