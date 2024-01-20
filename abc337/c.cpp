// テストの確認 -> command + shift + b

#include <iostream>
// #include <vector>
// #include <algorithm>
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
    si a[n];
    si aa[n];
    si first;
    for( si i=0; i<n; ++i ){
        si b;
        cin >> b;
        if( b == -1 )   ++b;
        a[b] = i+1;
    }
    
    cout << a[0];
    si now = a[0];
    for( si i=0; i<n-1; ++i ){
        cout << " " << a[now];
        now = a[now];
    }

    cout << endl;
    return 0;
}