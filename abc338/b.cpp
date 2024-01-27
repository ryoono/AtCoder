// テストの確認 -> command + shift + b

#include <iostream>
// #include <vector>
#include <algorithm>
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

    si cnt[26] = {0};

    for( si i=0; i<s.size(); ++i ){
        ++cnt[s[i]-'a'];
    }

    si maxcnt = 0;
    for( si i=0; i<26; ++i ){
        maxcnt = max( maxcnt, cnt[i]);
    }
    for( si i=0; i<26; ++i ){
        if( maxcnt == cnt[i] ){
            cout << char('a'+i) << endl;
            return 0;
        }
    }


    return 0;
}