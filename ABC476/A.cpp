/**
*    author:  Ryo
*    created: 19.09.2026 20:56:18
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
    int n = s.size();

    if(s[n-1]=='e'){
        cout << s << "r" << endl;
        return 0;
    }else{
        cout << s << "er" << endl;
        return 0;
    }

    
    return 0;
}