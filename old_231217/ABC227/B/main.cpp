#include <iostream>
#include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    ui n;
    cin >> n;

    vector<ui> s(n);
    for( ui i=0; i<n; ++i ){
        cin >> s[i];
    }

    ui sum = 0;

    for( ui i=0; i<n; ++i ){
        
        ui flag = 0;
        for( ui a=1; a<400; ++a ){
            for( ui b=1; b<400; ++b ){
                if( s[i] == (4*a*b)+(3*a)+(3*b) )   flag = 1;
            }
        }

        if( flag == 0 ) ++sum;
    }

    cout << sum;
    
    return 0;
}