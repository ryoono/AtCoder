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

    string s;
    cin >> s;

    for( si i=0; i<s.size(); ++i ){
        if( 'A' <= s[i] && s[i] <= 'Z' ){
            cout << i+1 << endl;
        }
    }
    return 0;
}