#include <iostream>
#include <vector>
#include <algorithm>
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
    vector<si> a(n);
    for( si i=0; i<n; ++i ){
        cin >> a[i];
    }
    sort( a.begin(), a.end());
    // for( si i=0; i<n; ++i ){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    si buf = a[0];
    // cout << buf << endl;?
    for( si i=1; i<n; ++i ){
        if( (++buf) != a[i] ){
            cout << buf;
            return 0;
        }
    }
    return 0;
}