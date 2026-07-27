/**
*    author:  Ryo
*    created: 18.07.2026 11:07:07
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, w; cin >> h >> w;
    double BMI = (double)w*10000/h/h;

    cout << (BMI>=25.0? "Yes" : "No") << endl;
    
    return 0;
}