#include <iostream>
// #include <vector>
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

    si n, t;
    cin >> n >> t;
    si c[n], r[n];

    si ans1 = 0;
    si ans2 = 0;
    si ansh1 = 0;
    si ansh2 = 0;
    si first_col;
    
    for( si i=0; i<n; ++i ){
        cin >> c[i];
    }
    for( si i=0; i<n; ++i ){
        cin >> r[i];
    }

    first_col = c[0];

    for( si i=0; i<n; ++i ){
        if( t == c[i] ){
            si ans1b = max( ans1, r[i]);
            if( ans1b != ans1 ){
                ansh1 = i+1;
                ans1 = ans1b;
            }
        }
        else if( first_col == c[i] ){
            si ans2b = max( ans2, r[i]);
            if( ans2b != ans2 ){
                ansh2 = i+1;
                ans2 = ans2b;
            }
        }
    }

    if( ansh1 != 0 ){
        cout << ansh1;
    }
    else{
        cout << ansh2;
    }
    return 0;
}