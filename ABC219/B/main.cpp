#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
#include <stdio.h>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    string s[3];
    char t[1000];
    for( ui i=0; i<1000; ++i ){
        t[i] = 'a';
    }
    cin >> s[0];
    cin >> s[1];
    cin >> s[2];
    scanf( "%s",t );

    ui i=0;
    while( t[i] != '\0' ){
        cout << s[t[i]-'1'];
        i++;
    }
    // for( ui i=0; t[i] != 'a'; ++i ){
    //     cout << s[t[i]-'1'];
    // }



    return 0;
}