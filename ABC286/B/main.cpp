#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
#include <regex>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){

    ui hoge;
    cin >> hoge;
    string s;
    cin >> s;

    cout << regex_replace( s, regex("na"), "nya");

    return 0;
}