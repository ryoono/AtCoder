#include <iostream>
#include <vector>
#include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
// #include <queue>
// #include <stack>
#include <stdio.h>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){

    si n;
    cin >> n;
    vector<si> x(n*5);
    for( si i=0; i<5*n; ++i ){
        cin >> x[i];
    }

    sort( x.begin(), x.end());

    double ans = 0.0;
    for( si i=n; i<4*n; ++i ){
        ans += (double)x[i]; 
    }

    printf("%.10f\n",ans/(3*n));
    return 0;
}