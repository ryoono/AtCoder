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

    ll a, b;
    cin >> a >> b;
    
    if( a % b ){
        cout << (a/b)+1;
    }
    else{
        cout << a/b;
    }
    return 0;
}