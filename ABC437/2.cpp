/**
*    author:  Ryo
*    created: 20.12.2025 21:03:35
**/

#include <bits/stdc++.h>

using namespace std;
const int inf = 1 << 30;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<int>> numbers(h, vector<int>(w));
    vector<int> bs(n);

    for(auto& number: numbers){
        for(auto& num: number){
            cin >> num;
        }
    }

    for(auto& b: bs){
        cin >> b;
    }

    int cnt=0;
    int max=0;

    for(const auto& number: numbers){
        for(const int& b: bs){
            for(const int& num: number){
                if(b==num){
                    cnt++;
                }
            }
        }

        if(cnt>max){
            max = cnt;
        }

        cnt=0;
    }

    cout << max << endl;


    return 0;
}