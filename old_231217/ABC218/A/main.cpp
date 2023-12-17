#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
#include <stdio.h>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    ui n;
    char s[10];
    string ss = "o";

    cin >> n;
    scanf("%s", s);

    if( s[n-1] == 'o' ){
        cout << "Yes";
        return 0;
    }

    cout << "No";

    return 0;
}