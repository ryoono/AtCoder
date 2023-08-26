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

    // クッキー四角の左上座標と右下座標の特定
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

    // #じゃない箇所の特定
    for( si i=sh; i<=eh; ++i ){
        for( si j=sw; j<=ew; ++j ){
            if( s[i][j] != '#' ){
                cout << i+1 << " " << j+1;
                return 0;
            }
        }
    }

    // イレギュラーパターン(右上または左下を食われた場合)
    if( sw != 0 ){
        if( s[sh+1][sw-1] == '#' ){
            cout << sh+1 << " " << sw;
            return 0;
        }
    }
    cout << eh+1 << " " << ew+2;
    return 0;
}