/**
*    author:  Ryo
*    created: 19.09.2026 20:56:25
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
    string s, t; cin >> s >> t;

    for(int i=0; i<n; i++){
        if(s[i]==t[i] || t[i]=='*'){
            continue;
        }else{
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    
    return 0;
}