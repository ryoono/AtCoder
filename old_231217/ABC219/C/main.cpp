#include <iostream>
#include <vector>
#include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
#include <stdio.h>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    string ori;
    string def = "abcdefghijklmnopqrstuvwxyz";
    ui n;
    
    cin >> ori;
    cin >> n;

    vector<string> s(n);
    vector<string> sb(n);

    for( ui i=0; i<n; ++i ){
        cin >> sb[i];

        for( ui j=0; j<sb[i].size(); ++j ){
            for( ui k=0; k<26; ++k ){

                if( sb[i][j] == ori[k] ){
                    s[i] += def[k];
                    break;
                }
            }
        }
    }

    sort( s.begin(), s.end());

    for( ui j=0; j<n; ++j ){
        for( ui i=0; i<s[j].size(); ++i ){
            for( ui k=0; k<26; ++k ){

                if( s[j][i] == def[k] ){
                    cout << ori[k];
                    //s[i] += ori[k];
                    break;
                }
            }
        }
        cout << endl;

    }

    // for( ui i=0; i<n; ++i ){
    //     cout << s[i] << endl;
    //     // for( ui j=0; s[i][j] != '\0'; ++j ){

    //     // }
    // }

    return 0;
}