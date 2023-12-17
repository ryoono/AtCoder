#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
#include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){

    si n;
    cin >> n;

    string s[n];
    for( si i=0; i<n; ++i ){
        cin >> s[i];
    }

    multimap<string, si> mp;
    for( si i=0; i<n; ++i ){

        multimap<string, si>::iterator itr_exists_mp = mp.find( s[i] );
        si num;
        if( itr_exists_mp == mp.end() ){
            num = 0;
            mp.insert( make_pair( s[i], 0) );
        }
        else{
            multimap<string, si>::iterator itr_si_end = mp.upper_bound( s[i] );
            --itr_si_end;
            num = itr_si_end->second + 1;
            mp.insert( make_pair( s[i], num) );
        }

        if( num ){
            cout << s[i] << "(" << num << ")" << endl;
        }
        else{
            cout << s[i] << endl;
        }
    }

    return 0;
}