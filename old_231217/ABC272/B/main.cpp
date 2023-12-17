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

    si k[m];
    si x[m][n];
    si ans[n][n];
    for( si i=0; i<n; ++i ){
        for( si j=0; j<n; ++j ){
            ans[i][j] = 0;
        }
    }

    for( si i=0; i<m; ++i ){
        cin >> k[i];
        for( si j=0; j<k[i]; ++j ){
            cin >> x[i][j];
        }
    }

    for( si i=0; i<m; ++i ){
        for( si j=0; j<k[i]-1; ++j ){
            for( si l=j+1; l<k[i]; ++l ){
                ans[x[i][j]-1][x[i][l]-1] = 1;
                ans[x[i][l]-1][x[i][j]-1] = 1;
            }
        }
    }

    // for( si i=0; i<n; ++i ){
    //     for( si j=0; j<n; ++j ){
    //         cout << ans[i][j];
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    for( si i=0; i<n; ++i ){
        for( si j=0; j<n; ++j ){
            if( i == j )    continue;
            if( ans[i][j] != 1 ){
                cout << "No";
                return 0;
            }
        }
    }

    cout << "Yes";


    return 0;
}