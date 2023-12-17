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

    si n, m;
    cin >> n >> m;
    si a[m][n];
    for( si i=0; i<m; ++i ){
        for( si j=0; j<n; ++j ){
            si buf;
            cin >> buf;
            a[i][j] = buf-1;
        }
    }

    si b[n][n];
    for( si i=0; i<n; ++i ){
        for( si j=0; j<n; ++j ){
            b[i][j] = 0;
            if( i == j )    b[i][j] = 1;
        }
    }

    for( si i=0; i<m; ++i ){
        for( si j=0; j<n-1; ++j ){
            b[a[i][j]][a[i][j+1]] = 1;
            b[a[i][j+1]][a[i][j]] = 1;
        }
    }

    si ans = 0;
    for( si i=0; i<n; ++i ){
        for( si j=0; j<n; ++j ){
            if( b[i][j] != 1 ){
                ++ans;
            }
        }
    }

    // for( si i=0; i<n; ++i ){
    //     for( si j=0; j<n; ++j ){
    //         cout << b[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << ans/2;

    

    return 0;
}