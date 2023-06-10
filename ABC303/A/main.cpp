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
    string s, t;
    cin >> n;
    cin >> s;
    cin >> t;

    for( si i=0; i<n; ++i ){
        if( s[i] == t[i] )  continue;
        if( (s[i] == '1' && t[i] == 'l') || (s[i] == 'l' && t[i] == '1') )  continue;
        if( (s[i] == '0' && t[i] == 'o') || (s[i] == 'o' && t[i] == '0') )  continue;

        cout << "No";
        return 0;
    }

    cout << "Yes";
    return 0;
}