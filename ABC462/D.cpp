/**
*    author:  Ryo
*    created: 13.06.2026 03:01:47
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

ll flac(ll num){
    return num*(num-1)/2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int latest = 0;
    int n, d; cin >> n >> d;
    vector<pair<int, int>> p(n, pair<int, int>());
    for(int i=0; i<n; i++) {
        cin >> p[i].first >> p[i].second;
        latest = max(latest, p[i].second);
    }


    sort(p.begin(), p.end());

    multiset<int> now; now.insert(p[0].second);
    ll ans = 0;
    int count = 1;
    for(int i=p[1].first; i+d<=latest;){
        ll nn = 0;
        while(count<n && p[count].first<=i){
            now.insert(p[count].second);
            count++;
        }

        vector<int> eras;
        int nextI = min((count<n? p[count].first: inf), *now.begin());
        for(int tmp: now){

            if(tmp<i+d){
                eras.push_back(tmp);
            }else{
                nn++;
            }
        }
        for(int a: eras) now.erase(a);

        
        ans += flac(nn)*(nextI-i-d+1);
        i = nextI;
    }


    cout << ans << endl;
    
    return 0;
}