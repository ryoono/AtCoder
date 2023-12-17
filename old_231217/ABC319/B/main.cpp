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
    si yakusuu[10];
    si yakusuu_idx=0;
    for( si i=1; i<10; ++i ){
        if( n%i == 0 )  yakusuu[yakusuu_idx++] = i;
    }
    // for( si i=0; i<10; ++i ){
    //     cout << yakusuu[i] << " ";
    // }
    for( si i=0; i<=n; ++i ){
        si flag = 0;
        for( si j=0; j<yakusuu_idx; ++j ){
            si nsj = n/yakusuu[j];
            // cout << i << " " << nsj << << " " << i&nsj endl;
            if( i%nsj == 0 ){
                cout << yakusuu[j];
                flag = 1;
            }
            if( flag == 1 ) break;
        }
        if( flag == 0 ) cout << "-";
    }
    return 0;
}