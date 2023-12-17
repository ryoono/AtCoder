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

    ui n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    ui a[n];
    ui b[n];
    for( ui i=0; i<n; ++i ){
        cin >> a[i];
    }

    ui ii=0;
    for( ii=0; ii<n; ++ii ){
        if( p <= ii+1 && ii+1 <= q ){
            cout << a[ii+(r-p)] << " ";
        }
        else if( r <= ii+1 && ii+1 <= s ){
            cout << a[ii-(r-p)] << " ";
        }
        else{
            cout << a[ii] << " ";
        }
    }

    return 0;
}