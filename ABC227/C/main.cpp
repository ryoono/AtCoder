#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    ll n;
    cin >> n;

    ll sum = 0;

    for( ll a=1; (a*a*a)<=n; ++a ){

        ll bd = n/a;
        for( ll b=a; (b*b)<=bd; ++b ){

            sum += (n/a/b)-b+1;
        }
    }

    cout << sum;

    return 0;
}