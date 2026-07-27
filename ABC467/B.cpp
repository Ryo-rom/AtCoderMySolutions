/**
*    author:  Ryo
*    created: 18.07.2026 11:07:32
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
    int ans = 0;

    for(int i=0; i<n; i++){
        int a, b; cin >> a >> b;
        string s; cin >> s;

        if(s == "keep"){
            ans += b - a;
        }
    }

    cout << ans << endl;
    
    return 0;
}