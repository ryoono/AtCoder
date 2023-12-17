#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    string s, t;

    cin >> s;
    cin >> t;

    if( s == t ){
        cout << "Yes";
        return 0;
    }

    for( ui i=0; i<s.size(); ++i ){
        for( ui j=i-1; j<=i+1; ++j ){

            if( j < 0 )continue;
            if( j >= s.size() )continue;
            string b;
            b = s;

            char bb;
            bb = b[i];
            b[i] = b[j];
            b[j] = bb;
            
            if( b == t ){
                cout << "Yes";
                return 0;
            }

        }
    }

    cout << "No";

    return 0;
}