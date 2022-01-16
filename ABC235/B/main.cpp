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

    ui n;
    cin >> n;
    ll h[n];
    for( ui i=0; i<n; ++i ){
        cin >> h[i];
    }

    ui now = 0;
    ll now_h = h[0];
    for( ui now=1; now<n; ++now ){
        if( now_h < h[now] ){
            now_h = h[now];
        }
        else{
            break;
        }
    }

    cout << now_h;
    
    return 0;
}