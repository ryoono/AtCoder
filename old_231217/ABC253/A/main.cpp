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

    ui a, b, c;
    cin >> a >> b >> c;

    if( ( a <= b && b <= c ) ||
        ( a >= b && b >= c ) ){
            cout << "Yes";
    }
    else{
        cout << "No";
    }
    
    return 0;
}