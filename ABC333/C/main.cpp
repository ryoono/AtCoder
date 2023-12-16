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
    cin >> n;
    if( n == 1 ){
        cout << 3;
        return 0;
    };

    ll a, b, c;
    a = b = c = 1;
    for( si i=0; i<n-1; ++i ){
        if( (a == b) && (b == c) ){
            c = (c*10)+1;
            a = 1;
            b = 1;
            continue;
        }
        if( a == b ){
            b = (b*10)+1;
            a = 1;
            continue;
        }
        a = (a*10)+1;
    }
    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;
    cout << a+b+c;

    return 0;
}