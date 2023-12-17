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

    si n, m, h, k;
    string s;
    cin >> n >> m >> h >> k;
    cin >> s;

    pair<si,si> point;
    point.first = point.second = 0;
    pair<si,si> suka;
    suka.first = suka.second = 200001;
    
    vector<pair<si,si> > item(m);
    for( si i=0; i<m; i++ ){
        cin >> item[i].first >> item[i].second;
    }

    sort( item.begin(), item.end());
    si done[m];
    for( si i=0; i<m; ++i ){
        done[i] = 0;
    }

    for( si i=0; i<s.size(); ++i ){

        if( --h < 0 ){
            cout << "No";
            return 0;
        }

        if( s[i] == 'R' )       ++point.first;
        else if( s[i] == 'L' )  --point.first;
        else if( s[i] == 'U' )  ++point.second;
        else                    --point.second;

        // cout << point.first << " " << point.second << endl;
        auto ite = lower_bound( item.begin(), item.end(), point);
        if( ite - item.begin() >= item.size() ) continue;
        if( *ite == point && done[ite - item.begin()] == 0 ){
            // cout << i << endl;
            if( h < k ){
                h = k;
                // ここにアイテムの要素を消すコード
                done[ite - item.begin()] = 1;
            }
        }
    }

    // cout << "------" << endl;
    // for( si i=0; i<item.size(); ++i ){
    //     cout << item[i].first << " " << item[i].second << endl;
    // }

    cout << "Yes";

    return 0;
}