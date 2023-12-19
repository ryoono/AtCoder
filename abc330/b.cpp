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

    ll n, l, r;
    cin >> n >> l >> r;
    ll a[n];
    for( ll i=0; i<n; ++i ){
        cin >> a[i];
    }

    for( ll i=0; i<n; ++i ){
        if( a[i] < l )  cout << l;
        else if( r < a[i] ) cout << r;
        else    cout << a[i];
        if( i != n-1 )  cout << " ";
    }

    cout << endl;

    return 0;
}