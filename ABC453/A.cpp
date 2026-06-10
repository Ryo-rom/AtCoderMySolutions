/**
*    author:  Ryo
*    created: 11.04.2026 20:54:29
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
    string s; cin >> s;
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='o') cnt++;
        else break;
    }

    if(cnt!=0){
        s.erase(0, cnt);
    }

    cout << s << endl;
    
    return 0;
}