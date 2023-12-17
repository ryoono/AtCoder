#include <iostream>

using namespace std;

typedef long long ll;

int main( void ){
    
    int ans[4] ={0};
    string s[3];
    for( int i=0; i<3; i++ ){
        cin >> s[i];
        if( s[i] == "ABC" ){
            ans[0] = 1;
        }
        if( s[i] == "ARC" ){
            ans[1] = 1;
        }
        if( s[i] == "AGC" ){
            ans[2] = 1;
        }
        if( s[i] == "AHC" ){
            ans[3] = 1;
        }
    }

    if( ans[0] == 0 ){
        cout << "ABC";
    }
    if( ans[1] == 0 ){
        cout << "ARC";
    }
    if( ans[2] == 0 ){
        cout << "AGC";
    }
    if( ans[3] == 0 ){
        cout << "AHC";
    }
    return 0;
}