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

    si n, l;
    cin >> n >> l;
    si a[n];
    si ans = 0;
    for( si i=0; i<n; ++i ){
        cin >> a[i];
        if( a[i] >= l ) ++ans;
    }

    cout << ans << endl;

    return 0;
}