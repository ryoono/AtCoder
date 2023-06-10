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

    si h, w;
    cin >> h >> w;

    string s[h];
    for( si i=0; i<h; ++i ){
        cin >> s[i];
    }

    bool sFlag = false;
    si sh=0, sw=0, eh=0, ew=0;
    for( si i=0; i<h; ++i ){
        for( si j=0; j<w; ++j ){
            if( sFlag == false ){
                if( s[i][j] == '#' ){
                    sFlag = true;
                    sh = i;
                    sw = j;
                }
            }
            else{
                if( s[i][j] == '#' ){
                    eh = i;
                    ew = j;
                }
            }
        }
    }

    // cout << sh << " " << sw << endl;
    // cout << eh << " " << ew << endl;


    for( si i=sh; i<=eh; ++i ){
        for( si j=sw; j<=ew; ++j ){
            // cout << "2" << endl;
            if( s[i][j] != '#' ){
                cout << i+1 << " " << j+1;
                return 0;
            }
            // cout << "2" << endl;
        }
    }

    if( sw != 0 ){
        if( s[sh+1][sw-1] == '#' ){
            cout << sh+1 << " " << sw;
            return 0;
        }
    }
    cout << eh+1 << " " << ew+2;
    // if( ew != w-2 ){
    //     if( s[eh-1][ew+1] == '#' ){
    //         cout << eh+1 << " " << sw+3;
    //         return 0;
    //     }
    // }
    return 0;
}