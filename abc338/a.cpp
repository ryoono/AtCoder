// テストの確認 -> command + shift + b

#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
// #include <queue>
// #include <stack>
// #include <cmath>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;
typedef string str;

int main( void ){

    string s;
    cin >> s;

    if( !('A' <= s[0] && s[0] <= 'Z')){
        cout << "No" << endl;
            return 0;
    }

    for( si i=1; i<s.size(); ++i ){
        if( !('a' <= s[i] && s[i] <= 'z') ){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}