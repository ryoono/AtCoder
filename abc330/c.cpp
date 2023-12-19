#include <iostream>
// #include <vector>
#include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
// #include <queue>
// #include <stack>
#include <cmath>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){

    ll d;
    cin >> d;
    ll xmax = sqrt(d)+1;
    ll ans = d;

    for( ll i=0; i<=xmax; ++i ){
        ll yu, yd;
        yd = sqrt(d - (i*i));
        yu = yd + 1;
        ans = min( ans, abs( (i*i) + (yd*yd) - d ));
        ans = min( ans, abs( (i*i) + (yu*yu) - d ));
    }

    cout << ans << endl;

    return 0;
}