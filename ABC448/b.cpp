/**
*    author:  Ryo
*    created: 07.03.2026 21:15:45
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, a, b;
    cin >> n >> m;

    vector<int> limits(m+1);
    for(int i=1; i<m+1; i++) cin >> limits[i];
    vector<pair<int, int>> dishes;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        dishes.emplace_back(make_pair(a, b));
    }
    sort(dishes.begin(), dishes.end());

    ll amount = 0;

    for(int i=1; i<m+1; i++){
        for(int j=0; j<n; j++){
            if(dishes[j].first < i) continue;
            else if(dishes[j].first > i) break;

            if(limits[i] >= dishes[j].second){
                amount += dishes[j].second;
                limits[i] -= dishes[j].second;
            }else{
                amount += limits[i];
                limits[i] = 0;
            }
        }
    }

    cout << amount << endl;
    
    return 0;
}