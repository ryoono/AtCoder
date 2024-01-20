// テストの確認 -> command + shift + b

#include <iostream>
// #include <vector>
#include <algorithm>
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

    si h, w, k;
    cin >> h >> w >> k;
    string s[h];
    for( si i=0; i<h; ++i ){
        cin >> s[i];
    }

    si ans = k + 1;  // 初期値

    // 横への確認
    for( si i=0; i<h; ++i ){
        si o=0, x=0, dot=0;
        for( si j=0; j<w; ++j ){
            if( s[i][j] == 'o' )    ++o;
            else if( s[i][j] == 'x' )   ++x;
            else    ++dot;

            if( j+1 >= k ){
                if( (o+dot) == k ){
                    ans = min( ans, dot);
                }
            }
            if( j >= k ){
                if( s[i][j-k] == 'o' )    --o;
                else if( s[i][j-k] == 'x' )   --x;
                else    --dot;
            }
        }
    }

    // 縦への確認
    for( si i=0; i<w; ++i ){
        si o=0, x=0, dot=0;
        for( si j=0; j<h; ++j ){
            if( s[j][i] == 'o' )    ++o;
            else if( s[j][i] == 'x' )   ++x;
            else    ++dot;

            // cout << j << " " << o << " " << x << " " << dot << endl;

            // k回目以上の場合
            if( j+1 >= k ){
                if( (o+dot) == k ){
                    ans = min( ans, dot);
                }
            }
            // k+1回目以上の場合，尺取り方
            if( j >= k ){
                if( s[j-k][i] == 'o' )    --o;
                else if( s[j-k][i] == 'x' )   --x;
                else    --dot;
            }
        }
    }

    if( ans == (k + 1) ) cout << -1 << endl;
    else    cout << ans << endl;

    return 0;
}