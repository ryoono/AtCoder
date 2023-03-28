#include <iostream>
#include <vector>
#include <algorithm>
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

    si n, k;
    cin >> n >> k;
    vector<si> a(n);
    for( si i=0; i<n; ++i ){
        cin >> a[i];
    }

    sort( a.begin(), a.end());
    // sort( a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    n = a.size();
    // cout << "n:" << n << endl;

    bool end_flag = false;
    si cnt = 0;
    for( si i=0; i<n; ++i ){
        if( a[i] == cnt ){
            ++cnt;
        }
        else{
            break;
            // if( !end_flag ){
            //     end_flag = true;
            //     ++cnt;
            // }
            // else{
            //     --cnt;
            //     break;
            // }
        }
    }
    // cout << "cnt:" << cnt << endl;
    if( k < cnt ){
        // cout << "a" << endl;
        cout << k << endl;
    }
    else{
        // cout << "b" << endl;
        cout << cnt << endl;
    }
    return 0;
}