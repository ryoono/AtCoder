#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

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

    pair<si,si> a, b;
    si cnt = 0;
    for( si i=0; i<h; ++i ){
        for( si j=0; j<w; ++j ){
            if( s[i][j] == 'o' ){
                if( cnt == 0 ){
                    a.first = i;
                    a.second = j;
                    ++cnt;
                }
                else{
                    b.first = i;
                    b.second = j;
                }
            }
        }
    }

    si ans = 0;
    si endflag = 0;
    while( true ){
        if( a.first != b.first ){
            if( a.first > b.first ) --a.first;
            else                    ++a.first;
            ++ans;
        }
        else{
            endflag |= 1;
        }

        if( a.second != b.second ){
            if( a.second > b.second )   --a.second;
            else                        ++a.second;
            ++ans;
        }
        else{
            endflag |= 2;
        }

        if( endflag == 3 )  break;
    }

    cout << ans;
    return 0;
}