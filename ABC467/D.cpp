/**
*    author:  Ryo
*    created: 18.07.2026 11:08:05
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int inf = 1 << 30;
const ll llinf = 1LL << 60;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    for(int i=0; i<t; i++){
        ll px, py, qx, qy, rx, ry, sx, sy;
        cin >> px >> py >> qx >> qy >> rx >> ry >> sx >> sy;

        if( (qy-py)*(rx-sx)-(qx-px)*(ry-sy)==0 && ((px+qx-rx-sx)*(ry-sy)/2 - (ry+sy-py-qy)*(rx-sx)/2) != 0 ){
            cout << "No" << endl;
        }else {
            cout << "Yes" << endl;
        }
    }
    
    return 0;
}