/**
*    author:  Ryo
*    created: 13.12.2025 21:25:03
**/

#include <bits/stdc++.h>

using namespace std;

bool setable(set<tuple<int, int>> se, int r, int c);

int main() {
    int numBlock = 0;
    int n;
    int m=0;
    int r=0;
    int c=0;
    set<int> si;
    set<tuple<int, int>> s;
    cin >> n >> m;

    for(int i=0; i<m; i++){
        cin >> r >> c;
        if(setable(s, r, c)){
            numBlock++;
        }

    }

    cout << numBlock << endl;

    return 0;
}

class Coordinate{
    private:
        int _a;
         int _b;

    public:
        Coordinate(int a, int b){
            _a = a;
            _b = b;
        }

        bool operator==
}

bool setable(set<tuple<int, int>> se, int r, int c){
    int r1 = --r;
    int c1 = --c;
    if(se.contains(tuple<int, int>{r1, c1}) && se.contains(tuple<int, int>{r1, c}) && se.contains(tuple<int, int>{r, c1}) && se.contains(tuple<int, int>{r, c})){
        se.insert(tuple<int, int>{r1, c1});
        se.insert(tuple<int, int>{r1, c});
        se.insert(tuple<int, int>{r, c1});
        se.insert(tuple<int, int>{r, c});

        return true;
    }
    else{
        return false;
    }
}
