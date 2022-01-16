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

    ui x;
    ui a, b, c;

    cin >> x;
    a = x/100;
    b = (x/10) % 10;
    c = x%10;

    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;

    cout << (a*100+b*10+c) + (b*100+c*10+a) + (c*100+a*10+b);

    return 0;
}