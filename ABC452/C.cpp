/**
*    author:  Ryo
*    created: 04.04.2026 16:43:41
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
    vector<pair<int, int>> ab(n+1, {0, 0});
    for(int i=1; i<n+1; i++) cin >> ab[i].first >> ab[i].second;
    int m; cin >> m;
    vector<set<char>> numC(n+1, set<char>());
    vector<string> s(m+1, "");
    for(int i=1; i<m+1; i++) {
        cin >> s[i];
        int siz = s[i].size();
        for(int j=1; j<n+1; j++){
            if(siz==ab[j].first){
                numC[j].insert(s[i][ab[j].second-1]);
            }
        }
    }

    for(int i=1; i<m+1; i++){
        string target = s[i];
        bool ok = true;

        if((int)target.size()!=n){
            cout << "No" << endl;
            continue;
        }

        for(int j=1; j<n+1; j++){
            if(numC[j].find(target[j-1]) == numC[j].end()){
                ok = false;
                break;
            } 
        }

        cout << (ok? "Yes": "No") << endl;
    }


    
    return 0;
}