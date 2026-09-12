/**
*    author:  Ryo
*    created: 05.09.2026 15:24:19
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin >> t;
    for(int i=0; i<t; i++){
        int n; cin >> n;

        vector<vector<ll>> price(n, vector<ll>(3)); //0: 差額, 1: 定価, 2割引価格
        for(int j=0; j<n; j++){
            cin >> price[j][1] >> price[j][2];
            price[j][0] = price[j][1] - price[j][2];
        }
        sort(price.begin(), price.end(), [](const vector<ll> &alpha,const vector<ll> &beta){return alpha[0] > beta[0];});

        ll ans = 0;
        for(int j=0; j<n; j++){
            ans += (j<n/2? price[j][2]: price[j][1]);
            cout << "add: " << (j<n/2? price[j][2]: price[j][1]) << endl; 
        }
        
        cout << ans<<endl;
    }
    
    return 0;
}