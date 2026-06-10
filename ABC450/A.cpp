/**
*    author:  Ryo
*    created: 21.03.2026 17:00:42
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
    for(int i=n; i>0; i--){
        cout << i;
        if(i==1){
            cout << endl;
        }else{
            cout << ",";
        }
    }
    
    return 0;
}