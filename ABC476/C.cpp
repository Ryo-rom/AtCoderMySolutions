/**
*    author:  Ryo
*    created: 19.09.2026 20:56:32
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

vector<int> add(vector<int> a, int b){
    if(a[2]>b){
        return a;
    }else if(a[1]>b){
        a[2] = b;
        return a;
    }else if(a[0]>b){
        a[2] = a[1];
        a[1] = b;
        return a;
    }else{
        a[2] = a[1];
        a[1] = a[0];
        a[0] = b;
        return a;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    vector<int> ans(3, -1);

    for(int i=0; i<n; i++){
        int c; cin >> c;
        ans = add(ans, c);

        if(i<2){
            continue;
        }

        cout << ans[2] << endl;
    }
    
    return 0;
}