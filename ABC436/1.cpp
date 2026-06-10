/**
*    author:  Ryo
*    created: 13.12.2025 20:37:09
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    string addO = "";

    for(int i=0; i<(n- s.length()); i++){
        addO += "o";
    }

    cout << addO << s << endl;


    return 0;
}