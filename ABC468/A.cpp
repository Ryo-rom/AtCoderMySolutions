/**
*    author:  Ryo
*    created: 25.07.2026 21:00:13
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
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int ans = 0;
    for(int i=0; i<n-2; i++){
        if( a[i]<a[i+1] && a[i+1] > a[i+2]){
            ans++;
        }
    }

    cout << ans << endl;
    
    return 0;
}