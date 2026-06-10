/**
*    author:  Ryo
*    created: 27.03.2026 14:51:55
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

    cout << (s.size()%5==0? "Yes" : "No") << endl;
    
    return 0;
}