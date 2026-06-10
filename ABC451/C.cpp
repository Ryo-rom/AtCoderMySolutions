/**
*    author:  Ryo
*    created: 27.03.2026 14:52:13
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    multiset<int> tree;

    int q; cin >> q;

    for(int i=0; i<q; i++){
        int which; cin >> which;
        int h; cin >> h;

        switch(which){
            case 1:{
                tree.insert(h);
                cout << tree.size() << endl;
                break;
            }
            default:{
                tree.erase(tree.begin(), upper_bound(tree.begin(), tree.end(), h));
                cout << tree.size() << endl;
                break;
            }
        }

    }
    
    return 0;
}