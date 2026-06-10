/**
*    author:  Ryo
*    created: 06.06.2026 17:44:04
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int color = 0;
    set<int> list;
    ll cost = 0L;
    int n, k, m; cin >> n >> k >> m;
    vector<pair<ll, ll>> stone;

    for(int i=0; i<n; i++){
        ll c, v; cin >> c >> v;
        stone.emplace_back(make_pair(v, c));
    }

    sort(stone.begin(), stone.end(), greater<pair<int, int>>());

    for(int i=0; i<n; i++){
        if(!list.contains(stone[i].second)){
            color++;
            cost += stone[i].first;
            list.insert(stone[i].second);
            stone[i].first = -1;
        }

        if(color>=m) break;
    }

    for(int i=0; i<n; i++){
        if(stone[i].first!=-1){
            color++;
            cost += stone[i].first;
        }

        if(color==k){
            cout << cost << endl;
            return 0;
        }
    }

    cout << "error" << endl;
    
    return 0;
}