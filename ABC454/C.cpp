/**
*    author:  Ryo
*    created: 18.04.2026 15:42:49
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

vector<vector<int>> g;
int n;

vector<bool> dfs(int pos, vector<bool> gg){
    int siz = g[pos].size();
    if(siz==0) return gg;
    vector<bool> ret = gg;

    for(int npos: g[pos]){
        vector<bool> got = gg;
        if(got[npos]) continue;

        got[npos] = true;
        vector<bool> ngot = dfs(npos, got);
        for(int i=0; i<n; i++){
            ret[i] = (ret[i] || ngot[i]);
        }
    }

    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m; cin >> n >> m;
    int item = 0;
    g = vector<vector<int>>(n, vector<int>());
    vector<bool> gotten = vector<bool>(n, false); gotten[0] = true;

    for(int i=0; i<m; i++){
        int a, b; cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
    }

    gotten = dfs(0, gotten);
    for(bool b: gotten){
        if(b) item++;
    }

    cout << item << endl;
    
    return 0;
}