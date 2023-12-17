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

    ui a, b;

    cin >> a;

    if( a < 40 ){
        cout << 40-a;
    }
    else if( a < 70 ){
        cout << 70-a;
    }
    else if( a < 90 ){
        cout << 90-a;
    }
    else {
        cout << "expert";
    }

    return 0;
}