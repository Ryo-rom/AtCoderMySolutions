/**
*    author:  Ryo
*    created: 07.03.2026 21:12:51
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x;
    cin >> n >> x;
    
    vector<int> a(n, 0);
    for(int i=0; i<n; i++) cin >> a[i];

    for(int ai : a){
        if(ai<x){
            x = ai;
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    
    return 0;
}