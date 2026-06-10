/**
*    author:  Ryo
*    created: 20.12.2025 21:23:18
**/

#include <bits/stdc++.h>
#define OFF 1
using namespace std;
const int inf = 1 << 30;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> which(n, 0);
        int cnt=0;
        int weight=0;
        int power=0;
        int maxPower = 0;

        vector<vector<long long>> cases(n, vector<long long>(2));
        for(auto& cas: cases){
            cin >> cas[0] >> cas[1];
        }

        


    }
    
    return 0;
}