/**
*    author:  Ryo
*    created: 05.09.2026 15:24:12
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
    vector<int> a(n); for(int i=0; i<n; i++) cin >> a[i];
    vector<int> b(n); for(int i=0; i<n; i++) cin >> b[i];
    vector<int> c(n); for(int i=0; i<n; i++) c[i] = a[i]-b[i];
    vector<ll> w(n, 1LL);

    ll pos = 0;
    ll neg = 0;
    ll sum = 0;

    for(int cc: c){
        if(cc<0){
            neg += -cc;
        }else{
            pos += cc;
        }
    }

    if(pos == 0){
        cout << "No" << endl;
        return 0;
    }

    ll ans = (neg/pos) + 1;

    if(ans > pow(10, 18)){
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    for(int cc: c){
        cout << (cc<0? 1: ans) << " ";
    }
    cout << endl;
    
    return 0;
}