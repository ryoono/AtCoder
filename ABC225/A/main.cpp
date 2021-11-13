#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    string s;
    cin >> s;

    ui moji = 0;
    if( s[0] == s[1] && s[1] == s[2] ){
        cout << "1";
    }
    else if( s[0] != s[1] && s[0] != s[2] && s[1] != s[2] ){
        cout << "6";
    }
    else{
        cout << "3";
    }
    
    return 0;
}