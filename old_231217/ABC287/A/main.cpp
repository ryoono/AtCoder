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

    ui n;
    cin >> n;
    string s[n];
    for( si i=0; i<n; ++i ){
        cin >> s[i];
    }

    ui ans = 0;
    for( si i=0; i<n; ++i ){
        if( s[i][0] == 'F' ){
            ++ans;
        }
        else{

        }
    }

    if( ans*2 > n ){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}