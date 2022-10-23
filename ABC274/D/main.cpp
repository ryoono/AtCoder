#include <iostream>
// #include <vector>
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

    si n, x, y;
    cin >> n >> x >> y;
    si a[n];
    for( si i=0; i<n; ++i ){
        cin >> a[i];
    }

    si sec_idx = pow(4,(n-1));
    // cout << sec_idx << endl;
    pair<si,si> point[n][sec_idx];
    // point[0][0] = make_pair( 0, 0);
    point[0][0] = make_pair( a[0], 0);
    // cout << "最初の位置 : " << a[0] << " " << 0 << endl;
    for( si i=1; i<n; ++i ){
        si std_point = pow(4,(i-1));
        // cout << std_point << endl;
        for( si j=0; j<=std_point; ++j ){
            si x_buf = point[i-1][j].first;
            si y_buf = point[i-1][j].second;
            point[i][j*4] = make_pair( x_buf+a[i], y);    // 右
            point[i][j*4+1] = make_pair( x_buf, y-a[i]);  // 下
            point[i][j*4+2] = make_pair( x_buf-a[i], y);  // 左
            point[i][j*4+3] = make_pair( x_buf, y+a[i]);  // 上
        }
    }

    for( si i=0; i<sec_idx; ++i ){
        si x_buf = point[n-1][i].first;
        si y_buf = point[n-1][i].second;
        // cout << x_buf << " " << y_buf << endl;
        if( (point[n-1][i].first == x) && (point[n-2][i].second == y) ){
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";

    return 0;
}