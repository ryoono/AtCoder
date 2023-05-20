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

si done[8];
si n, m;
string s[8];

si out;

// 1文字違いならtrue, それ以外はfalse
bool judge( string s1, string s2){
    si tigau = 0;
    for( si i=0; i<s1.size(); ++i){
        if( s1[i] != s2[i] )    ++tigau;
    }
    if( tigau <= 1 )    return true;
    return false;
}

si aaa( si moto ){
    ++out;
    for( si i=0; i<n; ++i ){
        // cout << out << endl;
        if( done[i] != 1 ){
            // cout << i << endl;
            // cout << s[moto] << " " << s[i] << endl;
            if( judge( s[moto], s[i]) == true ){
                done[i] = 1;
                si ans = 0;
                for( si i=0; i<n; ++i ){
                    ans += done[i];
                }
                if( ans == n ){
                    cout << "Yes";
                    --out;
                    return 1;
                }
                if( aaa( i ) == 1 ){
                    --out;
                    return 1;
                }
                done[i] = 0;
            }
        }
    }
    --out;
    return 0;
}


int main( void ){
    out = 0;
    for( si i=0; i<8; ++i ){
        done[i] = 0;
    }

    cin >> n >> m;

    for( si i=0; i<n; ++i ){
        cin >> s[i];
    }

    // string s1, s2;
    // cin >> s1;
    // cin >> s2;

    // if( judge( s1, s2) == true ){
    //     cout << 1;
    // }
    // else{
    //     cout << 2;
    // }
    

    for( si i=0; i<n; ++i ){
        done[i] = 1;
        if( aaa( i ) == 1 ){
            return 0;
        }
        done[i] = 0;
    }

    cout << "No";

    return 0;
}