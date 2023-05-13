#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
// #include <queue>
// #include <stack>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){

    string s, t;
    cin >> s;
    cin >> t;

    si s_num[26] = {0}, t_num[26] = {0};
    si s_at = 0, t_at = 0;

    for( si i=0; i<s.size(); ++i ){
        if( s[i] == '@' )   ++s_at;
        else                ++s_num[s[i]-'a'];

        if( t[i] == '@' )   ++t_at;
        else                ++t_num[t[i]-'a'];
    }

    string target = "atcoder";
    for( si i=0; i<target.size(); ++i ){
        if( s_num[target[i]-'a'] < t_num[target[i]-'a'] ){
            while( true ){
                if( s_at == 0 ) break;
                if( s_num[target[i]-'a'] == t_num[target[i]-'a'] ) break;

                --s_at;
                ++s_num[target[i]-'a'];
            }
        }
    }
    for( si i=0; i<target.size(); ++i ){
        if( t_num[target[i]-'a'] < s_num[target[i]-'a'] ){
            while( true ){
                if( t_at == 0 ) break;
                if( t_num[target[i]-'a'] == s_num[target[i]-'a'] ) break;

                --t_at;
                ++t_num[target[i]-'a'];
            }
        }
    }

    for( si i=0; i<26; ++i ){
        cout << t_num[i];
    }
    cout << " " << t_at;
    cout << endl;
    for( si i=0; i<26; ++i ){
        cout << s_num[i];
    }
    cout << " " << s_at;
    cout << endl;

    for( si i=0; i<26; ++i ){
        if( t_num[i] != s_num[i] ){
            cout << "No";
            return 0;
        }
    }
    if( t_at != s_at ){
        cout << "No";
        return 0;
    }

    cout << "Yes";

    return 0;
}