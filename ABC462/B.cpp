/**
*    author:  Ryo
*    created: 13.06.2026 03:01:28
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

    vector<vector<int>> present(n+1, vector<int>());

    for(int i=1; i<n+1; i++){
        int tmp; cin >> tmp;
        for(int j=0; j<tmp; j++){
            int person; cin >> person;
            present[person].emplace_back(i);
        }
    }

    for(int i=1; i<n+1; i++){
        int siz = present[i].size();

        cout << siz << " ";
        if(siz != 0){
            for(int a: present[i]){
                cout << a << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}