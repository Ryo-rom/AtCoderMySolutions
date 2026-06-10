/**
*    author:  Ryo
*    created: 14.03.2026 20:50:04
**/

#include <bits/stdc++.h>
#include<numbers>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;
const double pi = 3.141592653589793;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int d; cin >> d;

    double s = 1.0*(d/2.0)*(d/2.0)*pi;

    cout << fixed << setprecision(14);
    cout << s << endl;
    
    return 0;
}