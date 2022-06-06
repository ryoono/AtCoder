#include <iostream>
#include <vector>
#include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){

    si n, k;
    cin >> n >> k;

    vector<vector<si> > a(k);
    si a_idx = 0;
    si k_idx = 0;

    for( si i=0; i<n; ++i ){
        si buf;
        cin >> buf;
        a[a_idx].push_back(buf);
        ++a_idx %= k;
    }

    for( si i=0; i<k; ++i ){
        sort( a[i].begin(), a[i].end());
    }

    si now, cnt = 0;
    a_idx = 0;
    now = a[a_idx][0];
    for( si i=0; i<n; ++i ){
        si buf;
        buf = a[a_idx][cnt];
        if( now > buf ){
            cout << "No";
            return 0;
        }
        now = buf;
        ++a_idx;
        if( a_idx >= k ){
            a_idx = 0;
            ++cnt;
        }
    }

    cout << "Yes";
    return 0;
}