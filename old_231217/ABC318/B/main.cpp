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

    si s[101][101];
    for( si i=0; i<101; ++i ){
        for( si j=0; j<101; ++j ){
            s[i][j] = 0;
        }
    }

    si n;
    cin >> n;
    for( si i=0; i<n; ++i ){
        si a, b, c, d;
        cin >> a >> b >> c >> d;
        for( si j=a; j<b; ++j ){
            for( si k=c; k<d; ++k ){
                s[j][k] = 1;
            }
        }
    }

    si ans = 0;
    for( si i=0; i<101; ++i ){
        for( si j=0; j<101; ++j ){
            if( s[i][j] )   ++ans;
        }
    }

    // for( si i=0; i<10; ++i ){
    //     for( si j=0; j<10; ++j ){
    //         cout << s[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << ans;
    return 0;
}