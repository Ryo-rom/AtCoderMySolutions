/**
*    author:  Ryo
*    created: 11.04.2026 20:54:54
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<pair<int, int>> record;
    int t, x; cin >> t >> x;
    vector<int> a(t+1);
    for(int i=0; i<t+1; i++) cin >> a[i];

    record.push_back({0, a[0]});
    int pos = a[0];

    for(int i=1; i<t+1; i++){
        if(abs(pos-a[i])>=x){
            pos = a[i];
            record.push_back({i, a[i]});
        }
    }

    for(int i=0; i<record.size(); i++){
        cout << record[i].first << " "<<record[i].second<<endl;
    }
    
    return 0;
}