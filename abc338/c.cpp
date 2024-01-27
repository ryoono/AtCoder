// テストの確認 -> command + shift + b

#include <iostream>
// #include <vector>
#include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
// #include <queue>
// #include <stack>
// #include <cmath>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;
typedef string str;

int main( void ){

    si n;
    cin >> n;
    si q[n], a[n], b[n];
    si qb[n];
    for( si i=0; i<n; ++i ){
        cin >> q[i];
    }
    for( si i=0; i<n; ++i ){
        cin >> a[i];
    }
    for( si i=0; i<n; ++i ){
        cin >> b[i];
    }

    // 全部A作る時
    si alla = 1000001;
    for( si i=0; i<n; ++i ){
        if( a[i] != 0 ) alla = min( alla, q[i]/a[i]);
    }

    si ans = 0;
    for( si i=0; i<=alla; ++i ){
        for( si j=0; j<n; ++j ){
            qb[j] = q[j] - ((alla-i)*a[j]);
        }

        si bmax = 1000001;
        for( si k=0; k<n; ++k ){
            if( b[k] != 0 ) bmax = min( bmax, qb[k]/b[k]);
        }
        
        ans = max( ans, (alla-i)+bmax);

    }

    cout << ans << endl;

    return 0;
}