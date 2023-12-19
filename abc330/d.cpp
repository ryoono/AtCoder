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
    string s[n];
    for( si i=0; i<n; ++i ){
        cin >> s[i];
    }

    si r[n], c[n];
    for( si i=0; i<n; ++i ){
        r[i] = c[i] = 0;
    }

    for( si i=0; i<n; ++i ){
        for( si j=0; j<n; ++j ){
            if( s[i][j] == 'o' ){
                ++r[i];
                ++c[j];
            }
        }
    }

    ll ans = 0;
    for( si i=0; i<n; ++i ){
        for( si j=0; j<n; ++j ){
            if( s[i][j] == 'o' ){
                ans += ((r[i]-1)*(c[j]-1));
            }
        }
    }

    cout << ans << endl;
    return 0;
}