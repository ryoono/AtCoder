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

    si n, a, b;
    cin >> n >> a >> b;
    si c[n];
    for( si i=0; i<n; ++i ){
        cin >> c[i];
    }

    si ans = a + b;
    for( si i=0; i<n; ++i ){
        if( c[i] == ans ){
            cout << (i+1);
        }
    }

    return 0;
}