#include <iostream>
#include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
#include <cmath>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){

    ui n, m;
    cin >> n >> m;

    ui buf;
    vector<pair<ui,ui>> mpoint;
    buf = sqrt(m);

    for( ui i=1; i<=buf; ++i ){
        for( ui j=i; j<=buf; ++j ){
            // 移動先リストを作成
        }
    }

    si fi[n][n];
    for( ui i=0; i<n; ++i ){
        for( ui j=0; j<n; ++j ){
            fi[i][j] = -1;
        }
    }
    fi[0][0] = 0;
    si cnt = 0;

    // 移動先リストをもとにcnt回目の動作を実施する


    return 0;
}