#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
// #include <set>
// #include <map>
// #include <cstring>
#include <stdio.h>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    string s;
    cin >> s;

    ui used[ s.size() ] = {0};
    
    ui aketa=s.size()/2;
    ui bketa=s.size()-aketa;

    cout << aketa << endl;
    cout << bketa << endl;
    
    return 0;
}