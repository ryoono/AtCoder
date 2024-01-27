// テストの確認 -> command + shift + b

#include <iostream>
#include <vector>
#include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
// #include <queue>
// #include <stack>
// #include <cmath>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;
typedef string str;

int main( void ){

    si n;
    cin >> n;
    vector<pair<si,si>> a(n);
    for( si i=0; i<n; ++i ){
        si aa, bb;
        cin >> aa >> bb;
        si ma, mi;
        ma = max( aa, bb);
        mi = min( aa, bb);
        if( ma - mi > n){
            a[i].first = ma;
            a[i].second = mi;
        }
        else{
            a[i].first = mi;
            a[i].second = ma;
        }
    }

    sort( a.begin(), a.end());

    for( si i=0; i<n; ++i ){
        si idx=0;
        while( true ){
            if( i+idx>=n ) break;
            if( a[i+idx])

        }
    }

    for( si i=0; i<n; ++i ){
        cout << a[i].first << " " << a[i].second << endl;
    }
    return 0;
}