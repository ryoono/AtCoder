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

    si awin = 0;
    si twin = 0;

    for( si i=0; i<n; ++i ){
        if( s[i] == 'A' )   ++awin;
        else                ++twin;
    }

    if( awin == twin ){
        if( s[n-1] == 'A' ) cout << "T";
        else                cout << "A";
    }
    else if( awin > twin ){
        cout << "A";
    }
    else{
        cout << "T";
    }
    return 0;
}