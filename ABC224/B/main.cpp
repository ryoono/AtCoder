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

    ui h, w;
    cin >> h >> w;

    ui a[h][w];
    for( ui i=0; i<h; ++i ){
        for( ui j=0; j<w; ++j ){
            cin >> a[i][j];
        }
    }

    for( ui i=0; i<h-1; ++i ){
        for( ui j=i+1; j<h; ++j ){
            for( ui k=0; k<w-1; ++k ){
                for( ui l=k+1; l<w; ++l ){

                    if( (a[i][k] + a[j][l]) > (a[j][k] + a[i][l]) ){
                        cout << "No";
                        return 0;
                    }
                }
            }
        }
    }

    cout << "Yes";

    return 0;
}