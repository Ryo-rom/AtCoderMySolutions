/**
*    author:  Ryo
*    created: 28.02.2026 20:52:53
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, max;
    cin >> n >> m;
    max = n/2 + n%2;
    if(m<=max){
        cout << "Yes" << endl; 
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}