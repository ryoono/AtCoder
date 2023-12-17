#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){

    si n, m;
    cin >> n >> m;
    string s[n], t[m];
    for( si i=0; i<n; ++i ){
        cin >> s[i];
        s[i] = s[i].substr(3);
    }
    for( si i=0; i<m; ++i ){
        cin >> t[i];
    }

    si ans = 0;
    for( si i=0; i<n; ++i ){
        for( si j=0; j<m; ++j ){
            if( s[i] == t[j] ){
                ++ans;
                break;
            }
        }
    }

    cout << ans;

    return 0;
}