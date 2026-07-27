/**
*    author:  Ryo
*    created: 25.07.2026 21:11:54
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
    vector<int> p(n), q(n);
    for(int i=0; i<n; i++) cin >> p[i];
    for(int i=0; i<n; i++) cin >> q[i];

    ll ans = -1LL;

    if(p>=q){
        cout << 0 << endl;
        return 0;
    }

    do{
        if(p==q){
            break;
        }
        ans++;
    }while(next_permutation(p.begin(), p.end()));

    if(p!=q){
        ans++;
    }


    cout << ans << endl;

    return 0;
}