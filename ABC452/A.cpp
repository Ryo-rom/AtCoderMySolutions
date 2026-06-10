/**
*    author:  Ryo
*    created: 04.04.2026 16:43:12
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, d; cin >> m >> d;

    bool ans = false;

    if(m==1 && d==7) ans = true;
    if(m==3 && d==3) ans = true;
    if(m==5 && d==5) ans = true;
    if(m==7 && d==7) ans = true;
    if(m==9 && d==9) ans = true;

    cout << (ans? "Yes": "No") << endl;
    
    return 0;
}