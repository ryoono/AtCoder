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

    ui n;
    cin >> n;

    ui ans[n][n];
    for( ui i=0; i<n; ++i ){
        for( ui j=0; j<n; ++j ){
            ans[i][j] = 0;
        }
    }

    ans[0][0] = 1;
    cout << ans[0][0] << endl;

    for( si i=1; i<n; ++i ){
        ans[i][0] = 1;
        for( si j=1; j<=i; ++j ){
            ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
        }

        for( si j=0; j<=i; ++j ){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}