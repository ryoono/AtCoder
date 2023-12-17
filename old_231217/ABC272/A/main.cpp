#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){

    si n;
    cin >> n;

    si a[n];
    si sum = 0;
    for( si i=0; i<n; ++i ){
        cin >> a[i];
        sum += a[i];
    }

    cout << sum;
    
    return 0;
}