/**
*    author:  Ryo
*    created: 13.12.2025 21:06:03
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n=0;
    int r=0;
    int c=0;
    int k=1;
    
    cin >> n;
    int map[n][n] = {};

    c = (n-1)/2;
    map[r][c] = 1;

    for(int i=0; i<(n*n-1); i++){
        if(map[(r-1+n)%n][(c+1+n)%n]==0){
            r = (r-1+n)%n;
            c = (c+1+n)%n;
            map[r][c] = ++k;
        }else{
            r = (r+1)%n;
            map[r][c] = ++k;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << map[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}