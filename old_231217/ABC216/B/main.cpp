#include <iostream>

using namespace std;

int main( void ){

    int n;
    cin >> n;

    string s[n];
    string t[n];

    for( int i=0; i<n; i++ ){
        cin >> s[i] >> t[i];
    }

    for( int i=0; i<n-1; ++i ){
        for( int j=i+1; j<n; ++j ){

            if( s[i] == s[j] && t[i] == t[j] ){
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "No";
    
    return 0;
}