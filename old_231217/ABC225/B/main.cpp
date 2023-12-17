#include <iostream>
// #include <vector>
#include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    int n;
    cin >> n;

    int a[100009], b[100009];
    for( int i=0; i<n-1; ++i ){
        cin >> a[i] >> b[i];
    }

    int root[100009] = {0};

    for( int i=0; i<n-1; ++i ){
        root[a[i]] = b[i];
    }

    int flag = 0;
    int num = root[1];
    for( int i=1; i<n; ++i ){
        if( root[i] != num ){
            num = root[i];
            ++flag;
        }
    }

    // for( int i=0; i<n+1; ++i ){
    //     cout << root[i] << " ";
    // }
    // cout << endl;

    if( flag == 0 || flag == 1){
        cout << "Yes";
    }
    else{
        cout << "No";
    }


    return 0;
}