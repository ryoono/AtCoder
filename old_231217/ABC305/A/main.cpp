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

    si n;
    cin >> n;

    si buf = n%5;
    si ans;
    // if( n < 5 ){
    //     ans = 5;
    // }
    // else 
    if( buf < 3 ){
        ans = n - buf;
    }
    else{
        ans = n + (5-buf);
    }

    cout << ans;
    return 0;
}