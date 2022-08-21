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

    string a[n];
    for( si i=0; i<n; ++i ){
        cin >> a[i];
    }

    for( si i=0; i<n; ++i ){
        for( si j=0; j<n; ++j ){

            if( i == j ){
                if( a[i][j] != '-' ){
                    cout << "incorrect";
                    return 0;
                }
                
            }

            if( a[i][j] == 'W' ){
                if( a[j][i] != 'L' ){
                    cout << "incorrect";
                    return 0;
                }
                continue;
            }

            if( a[i][j] == 'L' ){
                if( a[j][i] != 'W' ){
                    cout << "incorrect";
                    return 0;
                }
                continue;
            }

            if( a[i][j] == 'D' ){
                if( a[j][i] != 'D' ){
                    cout << "incorrect";
                    return 0;
                }
                continue;
            }
        }
    }

    cout << "correct";
    return 0;
}