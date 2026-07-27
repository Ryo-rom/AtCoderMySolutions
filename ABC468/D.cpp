/**
*    author:  Ryo
*    created: 25.07.2026 21:36:53
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; cin >> s;
    ll n = s.size();
    string ss;
    for(char c: s){
        ss += c;
        ss += ".";
    }
    ss.pop_back();

    ll ns = ss.size();

    ll ans = 2*n - 1;

    for(ll i=2LL; i<ns-2; i++){
        ll cnt, diff;

        if(i%2 == 0){
            cnt = 0LL;
            diff = 2LL;
        }else{
            cnt = (ss[i-1]==ss[i+1]? 0: 1);
            // cout << i << "番目の初期cnt "<< cnt<<", "<<ss[i-1]<<", "<<ss[i+1]<<endl;
            diff = 3LL;
        }

        for(; i-diff>=0 && i+diff<ns; diff+=2){
            cnt += (ss[i-diff]==ss[i+diff]? 0 : 1);

            if(cnt<=1){
                ans++;
                // cout << i<<"番目の回文: "<<ss.substr(i-diff, 2*diff+1)<< ": "<<cnt << endl;
            }else{
                break;
            }
        }
        
    }

    cout << ans << endl;

    return 0;
}