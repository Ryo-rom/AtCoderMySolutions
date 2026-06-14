/**
*    author:  Ryo
*    created: 10.06.2026 22:23:22
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; cin >> s;
    string ans = "";
    for(char c : s){
        if((int)c >= '0' && (int)c <= '9'){
            ans += c;
        }
    }

    cout << ans << endl;
    
    return 0;
}