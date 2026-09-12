/**
*    author:  Ryo
*    created: 05.09.2026 15:23:40
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> a = {1, 2, 3};
    int x; cin >> x;

    for(int b: a){
        if(b != x){
            cout << b << endl;
            return 0;
        }
    }
    
    return 0;
}