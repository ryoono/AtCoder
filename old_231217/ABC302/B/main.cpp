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

    // わかりやすいように加工
    si ss[h][w];
    for( si i=0; i<h; ++i ){
        for( si j=0; j<w; ++j ){
            if( s[i][j] == 's' )    ss[i][j] = 1;
            else if( s[i][j] == 'n' )    ss[i][j] = 2;
            else if( s[i][j] == 'u' )    ss[i][j] = 3;
            else if( s[i][j] == 'k' )    ss[i][j] = 4;
            else if( s[i][j] == 'e' )    ss[i][j] = 5;
            else    ss[i][j] = 0;
        }
    }

    si r[5], c[5];
    si target = 1;
    for( si i=0; i<h; ++i ){
        for( si j=0; j<w; ++j ){
            target = 1;
            if( ss[i][j] == 1 ){
                r[target-1] = i+1;
                c[target-1] = j+1;
                target = 2;
                // 8方向に確認
                si ii, jj;
                // 上
                for( si l=0; l<5; ++l ){
                    ii = i-l-1;
                    jj = j;
                    if( 0 <= ii && ii < h && 0 <= jj && jj < w ){
                        r[target-1] = ii+1; c[target-1] = jj+1;
                        if( ss[ii][jj] == target ){
                            target++;
                        }
                        else{
                            break;
                        }
                        if( target == 6 ){
                            for( si z=0; z<5; ++z ){
                                cout << r[z] << " " << c[z] << endl;
                            }
                            return 0;
                        }
                    }
                }
                // 右上
                target = 2;
                for( si l=0; l<5; ++l ){
                    ii = i-l-1;
                    jj = j+l+1;
                    if( 0 <= ii && ii < h && 0 <= jj && jj < w ){
                        r[target-1] = ii+1; c[target-1] = jj+1;
                        if( ss[ii][jj] == target ){
                            target++;
                        }
                        else{
                            break;
                        }
                        if( target == 6 ){
                            for( si z=0; z<5; ++z ){
                                cout << r[z] << " " << c[z] << endl;
                            }
                            return 0;
                        }
                    }
                }
                // 右
                target = 2;
                for( si l=0; l<5; ++l ){
                    ii = i;
                    jj = j+l+1;
                    if( 0 <= ii && ii < h && 0 <= jj && jj < w ){
                        r[target-1] = ii+1; c[target-1] = jj+1;
                        if( ss[ii][jj] == target ){
                            target++;
                        }
                        else{
                            break;
                        }
                        if( target == 6 ){
                            for( si z=0; z<5; ++z ){
                                cout << r[z] << " " << c[z] << endl;
                            }
                            return 0;
                        }
                    }
                }
                // 右下
                target = 2;
                for( si l=0; l<5; ++l ){
                    ii = i+l+1;
                    jj = j+l+1;
                    if( 0 <= ii && ii < h && 0 <= jj && jj < w ){
                        r[target-1] = ii+1; c[target-1] = jj+1;
                        if( ss[ii][jj] == target ){
                            target++;
                        }
                        else{
                            break;
                        }
                        if( target == 6 ){
                            for( si z=0; z<5; ++z ){
                                cout << r[z] << " " << c[z] << endl;
                            }
                            return 0;
                        }
                    }
                }
                // 下
                target = 2;
                for( si l=0; l<5; ++l ){
                    ii = i+l+1;
                    jj = j;
                    if( 0 <= ii && ii < h && 0 <= jj && jj < w ){
                        r[target-1] = ii+1; c[target-1] = jj+1;
                        if( ss[ii][jj] == target ){
                            target++;
                        }
                        else{
                            break;
                        }
                        if( target == 6 ){
                            for( si z=0; z<5; ++z ){
                                cout << r[z] << " " << c[z] << endl;
                            }
                            return 0;
                        }
                    }
                }
                // 左下
                target = 2;
                for( si l=0; l<5; ++l ){
                    ii = i+l+1;
                    jj = j-l-1;
                    if( 0 <= ii && ii < h && 0 <= jj && jj < w ){
                        r[target-1] = ii+1; c[target-1] = jj+1;
                        if( ss[ii][jj] == target ){
                            target++;
                        }
                        else{
                            break;
                        }
                        if( target == 6 ){
                            for( si z=0; z<5; ++z ){
                                cout << r[z] << " " << c[z] << endl;
                            }
                            return 0;
                        }
                    }
                }
                // 左
                target = 2;
                for( si l=0; l<5; ++l ){
                    ii = i;
                    jj = j-l-1;
                    if( 0 <= ii && ii < h && 0 <= jj && jj < w ){
                        r[target-1] = ii+1; c[target-1] = jj+1;
                        if( ss[ii][jj] == target ){
                            target++;
                        }
                        else{
                            break;
                        }
                        if( target == 6 ){
                            for( si z=0; z<5; ++z ){
                                cout << r[z] << " " << c[z] << endl;
                            }
                            return 0;
                        }
                    }
                }
                // 左上
                target = 2;
                for( si l=0; l<5; ++l ){
                    ii = i-l-1;
                    jj = j-l-1;
                    if( 0 <= ii && ii < h && 0 <= jj && jj < w ){
                        r[target-1] = ii+1; c[target-1] = jj+1;
                        if( ss[ii][jj] == target ){
                            target++;
                        }
                        else{
                            break;
                        }
                        if( target == 6 ){
                            for( si z=0; z<5; ++z ){
                                cout << r[z] << " " << c[z] << endl;
                            }
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0;
}