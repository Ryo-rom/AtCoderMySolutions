/**
*    author:  Ryo
*    created: 28.02.2026 21:52:05
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string ss;
    cin >> ss;
    vector<char> s(ss.begin(), ss.end());
    vector<int> a, b, c;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='A') a.emplace_back(i);
        else if(s[i]=='B') b.emplace_back(i);
        else c.emplace_back(i);
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(c.begin(), c.end());

    int count=0;
    for(;a.size()>0 && b.size()>0 && c.size();){
        if(a.back()<b.back() && b.back()<c.back()){
            count++;
            a.pop_back();
            b.pop_back();
            c.pop_back();
        }else if(b.back()>c.back()){
            c.pop_back();
        }else{
            b.pop_back();
        }
    }
    
    cout << count << endl;
    
    return 0;
}
