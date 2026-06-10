/**
*    author:  Ryo
*    created: 20.12.2025 21:53:02
**/

#include <bits/stdc++.h>

using namespace std;
const int inf = 1 << 30;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const long long num = 998244353;
    long long sum=0;
    int n, m;
    cin >> n >> m;
    vector<long long> as(n);
    vector<long long> bs(m);
    for(auto& a: as){
        cin >> a;
    }

    for(auto& b: bs){
        cin >> b;
    }

    for(const auto& a: as){
        for(const auto& b: bs){
            sum+= abs(a-b);
        }

        sum%=num;
    }

    cout << sum << endl;

    return 0;
}