#include <iostream>
#include <vector>
#include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    int n;
    cin >> n;

    vector<pair<int,int>> root(n-1);

    for( int i=0; i<n-1; ++i ){
        cin >> root[i].first >> root[i].second;
    }

    sort( root.begin(), root.end());

    int a[n+1] = {0};
    ++a[root[0].first];
    ++a[root[0].second];
    ++a[root[1].first];
    ++a[root[1].second];

    int index = 0;
    int index_flag = 0;
    for( int i=0; i<=n+1; ++i ){
        if( a[i] == 2 ){
            index = i;
            ++index_flag;
        }
    }
    if( index_flag != 1 || index == 0 ){
        cout << "No";
        return 0;
    }

    for( int i=0; i<n-1; ++i ){
        if( root[i].first == index || root[i].second == index ){
            ;
        }
        else{
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

    return 0;
}