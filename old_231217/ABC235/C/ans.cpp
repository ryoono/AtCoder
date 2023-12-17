#include <iostream>
#include <vector>
// #include <algorithm>
// #include <set>
#include <map>
// #include <unordered_map>
// #include <cstring>
// #include <tuple>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;


int main( void ){

    si n, q;
    cin >> n >> q;

    vector<si> a(n), x(q), k(q);
    for( si i=0; i<n; ++i ){
        cin >> a[i];
    }
    for( si i=0; i<q; ++i ){
        cin >> x[i] >> k[i];
    }

    map<si,vector<si>> mp;
    for( si i=0; i<n; ++i ){
        mp[a[i]].push_back(i);
    }

    for( si i=0; i<q; ++i ){
        if( mp[x[i]].size() >= k[i] ){
            cout << mp[x[i]][k[i]-1] + 1 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}