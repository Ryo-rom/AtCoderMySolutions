/**
*    author:  Ryo
*    created: 05.09.2026 15:24:01
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q; cin >> n >> q;
    vector<int> a(n+q);
    vector<int> answer;
    for(int i=0; i<n+q; i++) cin >> a[i];
    reverse(a.begin(), a.end());

    set<int> inc;
    for(int i=0; i<n+q; i++){
        if(inc.find(a[i])==inc.end()){
            inc.insert(a[i]);
            answer.push_back(a[i]);
        }
    }

    reverse(answer.begin(), answer.end());

    for(int c: answer){
        cout << c << " ";
    }
    cout << endl;
    
    return 0;
}