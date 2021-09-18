#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    ui p[26];

    for( ui i=0; i<26; ++i ){
        cin >> p[i];
    }

    for( ui i=0; i<26; ++i ){
        cout << (char)('a'+(char)(p[i])-1);
    }


    return 0;
}