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

    string s;
    cin >> s;

    for( si i=0; i<s.size(); ++i ){
        if( s[i] == '0' )   s[i] = '1';
        else                s[i] = '0';
    }

    cout << s << endl;
    return 0;
}