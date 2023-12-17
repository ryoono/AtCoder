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

    ui h, w;
    cin >> h >> w;
    string c[h];
    for( si i=0; i<h; ++i ){
        cin >> c[i];
    }

    for( si i=0; i<w; ++i ){
        si sum = 0;
        for( si j=0; j<h; ++j ){
            if( c[j][i] == '#' ){
                ++sum;
            }
        }
        if( i == 0 ){
            cout << sum;
        }
        else{
            cout << " " << sum;
        }
    }
    return 0;
}