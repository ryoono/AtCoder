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

    si m, n;
    cin >> n >> m;

    si a[n], b[m];
    for( si i=0; i<n; ++i){
        cin >> a[i];
    }
    si ans = 0;
    for( si j=0; j<m; ++j ){
        cin >> b[j];
        ans += a[b[j]-1];
    }

    cout << ans << endl;

    return 0;
}