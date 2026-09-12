/**
*    author:  Ryo
*    created: 05.09.2026 15:23:54
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
    
    for(int i=0; i<n; i++) {
        int a; cin >> a; a--;
        if(i/10 != a/10){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;


    
    
    return 0;
}