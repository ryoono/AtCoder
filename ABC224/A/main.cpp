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
    string ss;

    cin >> s;

    if( s.size() >= 3 ){
        ss = s.substr(s.size()-3);
        if( ss == "ist" ){
            cout << "ist";
            return 0;
        }
    }
    cout << "er";
    // ss = s.substr(s.size()-2);
    // if( ss == "er" ){
    //     cout << "er";
    //     return 0;
    // }

    return 0;
}