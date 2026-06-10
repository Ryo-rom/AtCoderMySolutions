/**
*    author:  Ryo
*    created: 11.04.2026 21:49:33
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double pos = 0.5;
    int n; cin >> n;
    vector<int> l(n);
    for(int i=0; i<n; i++) cin >> l[i];
    
    int cnt = 0;

    for(int i=0; i<n; i++){
        if(pos<l[i]){
            pos = l[i]-pos;
            cnt++;
            continue;
        }

        if(i==n-1) continue;
        if(pos+l[i]<l[i+1]){
            pos = l[i]+pos;
        }else{
            pos = pos-l[i];
        }
    }

    cout << cnt << endl;
    
    return 0;
}