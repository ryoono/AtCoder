#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    ui n ,k, a;
    cin >> n >> k >> a;

    for( ui i=1; i<k; ++i ){
        ++a;
        if( a > n ) a = 1;
    }

    cout << a;

    return 0;
}