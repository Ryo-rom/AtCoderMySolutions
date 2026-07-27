/**
*    author:  Ryo
*    created: 25.07.2026 21:03:35
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, d; cin>> m >> d;
    string s; cin>> s;
    
    vector<int> ans(m, 1);

    for(int i=0; i<m; i++){
        if(s[i] == '.'){
            continue;
        }

        for(int j=-d; j<d+1; j++){
            if(i+j >= 0 && i+j < m){
                ans[i+j] = 0;
            }
        }
    }

    int answer = 0;
    for(int i=0; i<m; i++) answer += ans[i];

    cout << answer << endl;
    
    return 0;
}