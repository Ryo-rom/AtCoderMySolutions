/**
*    author:  Ryo
*    created: 07.03.2026 21:29:33
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q, k;
    cin >> n >> q;
    vector<int> a(n+1, inf);
    for(int i=1; i<n+1; i++) cin >> a[i];

    vector<pair<int, int>> small;
    for(int i=0; i<6; i++){
        int index = distance(a.begin(), min_element(a.begin(), a.end()));
        small.emplace_back(make_pair(a[index], index));
        a[index] = inf;
    }

    sort(small.begin(), small.end());
    
    for(auto& p: small){
        swap(p.first, p.second);
    }

    for(int i=0; i<q; i++){
        cin >> k;
        vector<int> b(k);
        for(int j=0; j<k; j++) cin >> b[j];

        for(int m=0; m<6; m++){
            if(!binary_search(b.begin(), b.end(), small[m].first)){
                cout << small[m].second << endl;
                vector<int>().swap(b);
                break;
            }
        }
    }
    
    return 0;
}