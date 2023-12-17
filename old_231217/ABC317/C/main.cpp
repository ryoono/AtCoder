#include <iostream>
// #include <vector>
#include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
// #include <queue>
// #include <stack>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

si done[11];
ll length[11][11];
si n, m;
ll rote_long;
ll rote_max;

void hoge( si town ){
    for( si i=1; i<=n; ++i ){
        // 道があって、通ったことが無ければ渡る
        if( (length[town][i] != 0) && (done[i] == 0) ){
            done[i] = 1;
            rote_long += length[town][i];
            rote_max = max( rote_long, rote_max);
            hoge( i );
            done[i] = 0;
            rote_long -= length[town][i];
        }
    }
}

int main( void ){

    // 初期化(一応)
    for( si i=0; i<11; ++i ){
        for( si j=0; j<11; ++j ){
            done[i] = 0;
            length[i][j] = 0;
        }
    }
    rote_long = rote_max = 0;
    cin >> n >> m;

    for( si i=1; i<=m; ++i ){
        ll a, b, c;
        cin >> a >> b >> c;
        length[a][b] = length[b][a] = c;
    }

    // cout << endl;
    // cout << endl;
    // for( si i=0; i<11; ++i ){
    //     for( si j=0; j<11; ++j ){
    //         cout << length[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // スタート地点を決める
    // 1街 ~ n街まで
    for( si i=1; i<=n; ++i ){
        done[i] = 1;
        hoge(i);
        done[i] = 0;
        // cout << i << endl;
    }

    cout << rote_max;

    return 0;
}