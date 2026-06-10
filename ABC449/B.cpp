/**
*    author:  Ryo
*    created: 14.03.2026 21:12:05
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, w, q;
    cin >> h >> w >> q;

    for(int i=0; i<q; i++){
        int which, num;
        cin >> which >> num;

        switch(which){
            case 1:
                cout << num*w << endl;
                h -= num;
                break;

            default:
                cout << num*h << endl;
                w -= num;
                break;
        }
    }
    
    return 0;
}