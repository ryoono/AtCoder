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

    si n, m, p;
    cin >> n >> m >> p;
    si flag = 1;
    si ans = 0;
    for( si i=1; i<=n; ++i ){
        if( flag && i == m ){
            ++ans;
            flag=0;
        }
        else{
            if( (i-m)%p == 0 ){
                ++ans;
            }
        }
    }

    cout << ans;

    return 0;
}