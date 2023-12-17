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
    for( si i=0; i<n; ++i ){
        cout << (char)(0x30+n);
    }
    cout << endl;
    return 0;
}