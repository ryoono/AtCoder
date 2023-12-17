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

    ll n, m;
    cin >> n >> m;
    ll l[n];
    for( ll i=0; i<n; ++i ){
        cin >> l;
    }
    ll dp[n][n];
    for( ll i=0; i<n; ++i ){
        for( ll j=0; j<n; ++j ){
            dp[i][j] = 0;
        }
    }
    for( ll i=0; i<n; ++i ){
        for( ll j=0; j<n; ++j ){
            
        }
    }
    return 0;
}