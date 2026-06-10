/**
*    author:  Ryo
*    created: 18.04.2026 15:42:39
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
    vector<int> fashion(m, 0);
    bool doubled = false;

    for(int i=0; i<n; i++){
        int w; cin >> w; w--;
        fashion[w]++;
        if(fashion[w]>=2) doubled = true;
    }

    cout << (doubled? "No" : "Yes") << endl;

    for(int f: fashion){
        if(f==0){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    
    return 0;
}