/**
*    author:  Ryo
*    created: 28.02.2026 21:03:35
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string s;
    cin >> s;
    n = s.size();

    vector<pair<char, int>> map;

    for(int i=0; i<n; i++){
        for(int j=0; j<map.size(); j++){
            if(s.at(i) == map[j].first){
                map[j].second++;
                break;
            }
        }

        map.emplace_back(make_pair(s.at(i), 1));
    }

    int max=0;
    for(int i=0; i<map.size(); i++){
        if(map[i].second>max) max = map[i].second;
    }
    vector<char> ch;
    for(int i=0; i<map.size(); i++){
        if(map[i].second==max) ch.emplace_back(map[i].first);
    }

    for(int i=0; i<n; i++){
        if(find(ch.begin(), ch.end(), s.at(i))!=ch.end()) continue;
        cout << s.at(i);
    }
    cout << endl;


    return 0;
}