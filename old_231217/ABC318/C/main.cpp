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

    ll n, d, p;
    cin >> n >> d >> p;
    vector<ll> f(n);
    ll ans = 0;
    for( ll i=0; i<n; ++i ){
        cin >> f[i];
        ans += f[i];
    }
    sort(f.begin(), f.end());

    // for( si i=0; i<n; ++i ){
    //     cout << f[i] << " ";
    // }
    // cout << endl;

    ll idx;
    ll ans_buf = ans;
    ll hoge;
    for( idx=n-1; idx>=0; ++hoge){
        for( ll i=0; i<d; ++i ){
            if( i==0 )  ans_buf += p;
            ans_buf -= f[idx];
            // cout << idx << " " << ans_buf << endl;
            ans = min( ans, ans_buf);
            --idx;
            if( idx < 0 )   break;
        }
    }

    cout << ans;

    return 0;
}