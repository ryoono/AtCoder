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

    ui l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    ui ans = 0;

    for( ui i=0; i<=100; ++i ){
        if( l1 <= i && i <= r1 ){
            if( l2 <= i && i <= r2 ){
                ++ans;
            }
        }
    }
    if( ans >= 1 ){
        cout << ans-1;
    }
    else{
    cout << 0;
    }
    return 0;
}