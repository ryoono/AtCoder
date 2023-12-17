#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    ui n, m;
    cin >> n >> m;

    ui b[n][m];
    for( ui i=0; i<n; ++i ){
        for( ui j=0; j<m; ++j ){
            cin >> b[i][j];
        }
    }

    ui index_row;   // 今見ている行
    ui index_col;   // 今見ている列
    ui row_min; // row_min <= n <= roe_max
    ui row_max;
    ui col_min; // cok_min <= m <= col_max
    ui col_max;

    row_min = (b[0][0] / 7);
    row_max = (b[n-1][0] / 7);
    col_min = b[0][0] % 7 -1;
    if( b[0][m-1] % 7 == 0 )   col_max = 6;
    else    col_max = (b[0][m-1] % 7) - 1;

    // cout << row_min << endl;
    // cout << row_max << endl;
    // cout << col_min << endl;
    // cout << col_max << endl;

    // 数が正しいのかのチェック
    if( (row_max-row_min) == (n-1) && (col_max-col_min) == (m-1) ){
        ;
    }
    else{
        cout << "No";
        return 0;
    }

    index_row = row_min+1;

    for( ui i=0; i<n; ++i ){
        index_col = col_min+1;
        for( ui j=0; j<m; ++j ){
            
            if( b[i][j] != ((index_row-1) * 7) + index_col ){
                cout << "No";
                return 0;
            }
            ++index_col;
        }
        ++index_row;
    }

    // cout << index_col << endl;
    // cout << index_row << endl;

    if( index_col == col_max+2 && index_row == row_max+2 ){
        cout << "Yes";
        return 0;
    }

    cout << "No";

    return 0;
}