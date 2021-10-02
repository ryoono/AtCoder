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

    ui a ,b;
    ui ans = 1;

    cin >> a >> b;

    for ( ui i=b; i<a; ++i){
        ans *= 32;
    }

    cout << ans;

    return 0;
}