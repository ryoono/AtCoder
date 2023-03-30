#include <iostream>
#include <vector>
// #include <algorithm>
#include <set>
// #include <map>
// #include <cstring>
// #include <queue>
// #include <stack>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){

    si n;
    string s;
    cin >> n;
    cin >> s;

    vector<set<si> > st(200001);

    pair<si,si> point;
    point.first = point.second = 0;
    st[point.first].insert(point.second);
    for( si i=0; i<n; ++i ){
        switch(s[i]){
            case 'R':
                ++point.first;
                if( point.first == 200001 ) point.first=0;
                break;
            case 'L':
                --point.first;
                if( point.first == -1 ) point.first=200000;
                break;
            case 'U':
                ++point.second;
                if( point.second == 200001 ) point.second=0;
                break;
            case 'D':
                --point.second;
                if( point.second == -1 ) point.second=200000;
                break;
        }

        auto r = st[point.first].insert(point.second);
        if( r.second == false ){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}