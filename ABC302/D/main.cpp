#include <iostream>
#include <vector>
#include <algorithm>
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

    ll n, m, d;
    cin >> n >> m >> d;
    ll a[n];
    for( ll i=0; i<n; ++i ){
        cin >> a[i];
    }
    vector<ll> b(n);
    for( ll i=0; i<n; ++i ){
        cin >> b[i];
    }
    sort( b.begin(), b.end());

    ll ans = -1;
    for( ll i=0; i<n; ++i ){
        ll under, upper;
        under = max( a[0], a[i]-d);
        upper = min( a[n-1], a[i]+d);

        auto Iter_under = lower_bound(b.begin(), b.end(), under);
        auto Iter_upper = upper_bound(b.begin(), b.end(), upper);

        if( 0 <= (Iter_upper - b.begin()) && (Iter_under - b.begin()) < n ){
            ans = max( ans, a[i]+(*Iter_under));
            ans = max( ans, a[i]+(*Iter_upper));
        }
    }

    cout << ans;

    return 0;
}