/**
*    author:  Ryo
*    created: 18.07.2026 11:07:50
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll ans = 0LL;
    int n, m; cin >> n >> m;
    vector<int> a(n); for(int i=0; i<n; i++) cin >> a[i];
    vector<int> b(n-1); for(int i=0; i<n-1; i++) cin >> b[i];

    for(int i=0; i<n-1; i++){
        if( (a[i]+a[i+1])%m == b[i]) continue;

        ans += 1LL;
        if(i==0 && n>=4 && ((a[i+1]+a[i+2])%m != b[i+1]) && ((a[i+2]+a[i+3])%m == b[i+2])){
            a[i] = (a[i]+1)%m;
        }else{
            a[i+1] = (a[i+1] + 1)%m;
        }
    }

    cout << ans << endl;
    
    return 0;
}