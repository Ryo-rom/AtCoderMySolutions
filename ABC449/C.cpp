/**
*    author:  Ryo
*    created: 14.03.2026 21:18:56
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, l, r;
    cin >> n >> l >> r;
    string s; cin >> s;

    vector<vector<int>> alphabet(26, vector<int>());
    int answer = 0;

    for(int i=0; i<n; i++){
        int c = (int)s[i] - 'a';
        if(alphabet[c].size()!=0){
            for(int j=alphabet[c].size()-1; j>=0; j--){
                if(i-alphabet[c][j]>r){
                    alphabet[c].erase(remove(alphabet[c].begin(), alphabet[c].end(), alphabet[c][j]), alphabet[c].end());
                }else if(i-alphabet[c][j]<l) {

                }else {
                    answer++;
                }
            }
        }

        alphabet[c].push_back(i);
    }

    cout << answer << endl;
    
    return 0;
}