/**
*    author:  Ryo
*    created: 27.03.2026 14:52:22
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int AddNum(vector<string>& o, string num, int siz){
    if(o[siz-1].size()==num.size()){
        o.push_back(num);
        return siz+1;
    }else{

    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<string> order = {"1", "2", "4", "8", "16"};
    int n; cin >> n;
    int digit = 1;
    int si = 4;
    for(int i=4; i<30; i++){
        string s = to_string(1<<i);

    }  

    return 0;
}