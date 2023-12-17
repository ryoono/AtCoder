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

    si q;
    cin >> q;

    map<si,si> s; 
    si ans[q];
    si ans_cnt = 0;

    while( q-- ){
        si num, x, c;
        cin >> num;

        switch( num ){
            case 1:

                cin >> x;
                if( s.count(x) )    ++s[x];
                else                s[x] = 1;
                break;
            case 2:

                cin >> x >> c;
                if( s.count(x) ){
                    s[x] -= c;
                    if( s[x] <= 0 ) s.erase(x);
                }
                break;
            
            case 3:

                int smin = s.begin()->first;
                int smax = s.rbegin()->first;
                ans[ans_cnt++] = smax - smin;
                break;
        }
    }

    for( si i=0; i<ans_cnt; ++i ){
        cout << ans[i] << endl;
    }
    return 0;
}