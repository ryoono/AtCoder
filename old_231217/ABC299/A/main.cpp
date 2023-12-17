#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
// #include <queue>
// #include <stack>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){

    si n;
    string s;
    cin >> n;
    cin >> s;

    bool flag = false;

    for( si i=0; i<n; ++i ){
        if( flag == false && s[i] == '|'){
            flag = true;
        }
        else if(flag == true && s[i] == '|'){
            cout << "out";
            return 0;
        }
        if( flag == true && s[i] == '*'){
            cout << "in";
            return 0;
        }
    }
    return 0;
}