/**
*    author:  Ryo
*    created: 04.04.2026 16:43:28
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, w; cin>> h >> w;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(i==0 || i==h-1 || j==0 || j==w-1) cout << '#';
            else cout << ".";
        }
        cout << endl;
    }
    
    return 0;
}