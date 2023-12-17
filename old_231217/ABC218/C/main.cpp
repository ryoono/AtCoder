#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
#include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    ui n;
    cin >> n;

    char s[n][n], t[n][n];

    for( ui i=0; i<n; ++i ){
        for( ui j=0; j<n; ++j ){
            cin >> s[i][j];
        }
    }

    for( ui i=0; i<n; ++i ){
        for( ui j=0; j<n; ++j ){
            cin >> t[i][j];
        }
    }

    //cout << endl << endl;

    // 左回転4回
    for( ui i=0; i<4; ++i ){
        char buff[n][n];
        char bufff[n][n];
        char buffff[n][n];

        memcpy( buff, s, (n*n));
        memcpy( bufff, s, (n*n));
        memcpy( buffff, s, (n*n));

        // 回転作業
        for( ui j=0; j<i; ++j ){
            for( ui k=0; k<n; ++k ){
                for( ui l=0; l<n; ++l ){
                    bufff[k][l] = buff[l][n-1-k];
                }
            }
            memcpy( buff, bufff, (n*n));
        }
        // memcpy( buff, bufff, (n*n));
        memcpy( buffff, bufff, (n*n));

        // cout << "**************" << endl;
        // for( ui k=0; k<n; ++k ){
        //             for( ui l=0; l<n; ++l ){
        //                 cout << buff[k][l];
        //             }
        //             cout << endl;
        //         }
        //         cout << "**************" << endl << endl;

        // 完了処理
        if( !memcmp( buff, t, (n*n) ) ){
            cout << "Yes";
            return 0;
        }
        // 垂直移動n回
        for( ui z=0; z<n; ++z ){
            for( ui y=0; y<n; ++y ){
                for( ui x=0; x<n; ++x ){
                    if( y==(n-1) ){
                        bufff[y][x] = buff[0][x];
                        //cout << "a";
                    }
                    else{
                        bufff[y][x] = buff[y+1][x];
                        //cout << "b";
                    }
                    //cout << "c";
                }
                //cout << "d";
            }
            memcpy( buff, bufff, (n*n));
            // 完了処理
            if( !memcmp( buff, t, (n*n) ) ){
                cout << "Yes";
                return 0;
            }
        }
        memcpy( buff, buffff, (n*n));
        memcpy( bufff, buffff, (n*n));

        // 平行移動処理
        for( ui j=0; j<n; ++j ){

            // cout << "aaaaaaaaaaaaaaaaaaaaaa" << endl << endl;
            // 平行移動n回
            for( ui k=0; k<n; ++k ){
                for( ui l=0; l<n; ++l ){
                    if( l==(n-1) ){
                        bufff[k][l] = buffff[k][0];
                    }
                    else{
                        bufff[k][l] = buffff[k][l+1];
                    }
                }
            }
            memcpy( buffff, bufff, (n*n));
            memcpy( buff, bufff, (n*n));
            // 配列表示デバッグ
            // cout << "count : " << j << endl;
            // for( ui k=0; k<n; ++k ){
            //     for( ui l=0; l<n; ++l ){
            //         cout << bufff[k][l];
            //     }
            //     cout << endl;
            // }
            // cout << endl << endl;
            // 完了処理
            // for( ui k=0; k<n; ++k ){
            //         for( ui l=0; l<n; ++l ){
            //             cout << buff[k][l];
            //         }
            //         cout << endl;
            //     }
            //     cout << endl << endl;
            if( !memcmp( buff, t, (n*n) ) ){
                cout << "Yes";
                return 0;
            }
            // 垂直移動n回
            for( ui z=0; z<n; ++z ){
                for( ui y=0; y<n; ++y ){
                    for( ui x=0; x<n; ++x ){
                        if( y==(n-1) ){
                            bufff[y][x] = buff[0][x];
                            //cout << "a";
                        }
                        else{
                            bufff[y][x] = buff[y+1][x];
                            //cout << "b";
                        }
                        //cout << "c";
                    }
                    //cout << "d";
                }
                memcpy( buff, bufff, (n*n));
                // 完了処理
                // cout << "count : " << j << endl;
                // for( ui k=0; k<n; ++k ){
                //     for( ui l=0; l<n; ++l ){
                //         cout << bufff[k][l];
                //     }
                //     cout << endl;
                // }
                // cout << endl << endl;
                if( !memcmp( buff, t, (n*n) ) ){
                    cout << "Yes";
                    return 0;
                }
            }
        }
    }

    cout << "No";
    return 0;
}