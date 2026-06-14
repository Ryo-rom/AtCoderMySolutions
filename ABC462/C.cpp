/**
*    author:  Ryo
*    created: 13.06.2026 03:01:38
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
    vector<int> points(n+1, 0);
    for(int i=0; i<n; i++) {
        int x, y; cin >> x >> y;
        points[x] = y;
    }

    int ans = 0;
    int minimum = inf;
    for(int i=1; i<n+1; i++){
        if(points[i]<minimum){
            ans++;
            minimum = points[i];
        }
    }

    cout << ans << endl;
    
    return 0;
}