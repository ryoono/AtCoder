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
    si x[n], y[n];
    si xsum=0, ysum=0;
    for( si i=0; i<n; ++i ){
        cin >> x[i] >> y[i];
        xsum += x[i];
        ysum += y[i];
    }

    if( xsum > ysum ){
        cout << "Takahashi";
    }
    else if( ysum > xsum ){
        cout << "Aoki";
    }
    else{
        cout << "Draw";
    }

    cout << endl;

    return 0;
}