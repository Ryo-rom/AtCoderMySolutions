/**
*    author:  Ryo
*    created: 21.03.2026 17:01:11
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        int tmp; cin >> tmp;
        a[i] = tmp%k;
    }

    sort(a.begin(), a.end());

    int diff = a[n-1] - a[0];

    for(int i=n-1; i>0; i--){
        a[i] -= k;

        diff = min(diff, a[i-1]-a[i]);
    }

    cout << diff << endl;
    
    return 0;
}