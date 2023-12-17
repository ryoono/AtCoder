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

    si n, h, x;
    cin >> n >> h >> x;
    si p[n];
    for( si i=0; i<n; ++i ){
        cin >> p[i];
    }

    for( si i=0; i<n; ++i ){
        if( h + p[i] >= x ){
            cout << i+1;
            return 0;
        }
    }
    return 0;
}