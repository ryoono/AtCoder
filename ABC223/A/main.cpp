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

    ui x;

    cin >> x;

    for( ui i=1; i<11; ++i ){
        if( x == i*100 ){
            cout << "Yes";
            return 0;
        }
    }
    
    cout << "No";

    return 0;
}