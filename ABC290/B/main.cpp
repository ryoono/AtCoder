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

    si n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    si cnt = 0;
    for( si i=0; i<s.size(); ++i ){
        if( s[i] == 'o' ){
            if( !(cnt < k) ){
                s[i] = 'x';
            }
            ++cnt;
        }
    }

    cout << s << endl;
    return 0;
}