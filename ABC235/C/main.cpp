#include <iostream>
#include <vector>
#include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
#include <tuple>

using namespace std;

typedef long long ll;
typedef int ui;

int main( void ){

    ui n, q;
    cin >> n >> q;

    vector<pair<ui,ui>> a(n);
    vector<tuple<ui,ui,ui>> z(q); // x[i],k[i],id
    for( ui i=0; i<n; ++i ){
        a[i].second = i+1;
        cin >> a[i].first;
    }
    for( ui i=0; i<q; ++i ){
        ui x, k;
        cin >> x >> k;
        z[i] = { x, k, i};
    }

    sort( a.begin(), a.end());
    sort( z.begin(), z.end());

    int ans[q] = {0};
    ui a_num = 0;
    ui cnt = 0;

    for( ui i=0; i<q; ++i ){

        if( i ){
            if( get<0>(z[i-1]) == get<0>(z[i])){
                if( get<1>(z[i-1] ) == get<1>(z[i] ) ){
                    ans[get<2>(z[i])] = ans[get<2>(z[i-1])];
                }
            }
        }
        ui look_num = get<0>(z[i]);

        if( a_num == n ) break;
        while( look_num > a[a_num].first ){
            cnt = 0;
            ++a_num;
            if( a_num == n ) break;
        }
        if( a_num == n ) break;
        if( look_num != a[a_num].first ){
            cnt = 0;
            continue;
        }
        
        ++cnt;
        if( get<1>(z[i] ) < cnt ){
            --i;
            ++a_num;
            continue;
        }
        if( get<1>(z[i] ) == cnt ){
            ans[get<2>(z[i])] = a[a_num].second;
            ++a_num;
        }
    }

    for( ui i=0; i<q; ++i ){
        if( ans[i] ){
            cout << ans[i] << endl;
        }
        else{ cout << -1 << endl;}
    }

    // for( ui i=0; i<n; ++i ){
    //     cout << a[i].first << " ";
    // }
    // cout << endl;
    // for( ui i=0; i<q; ++i ){
    //     ui c,d,e;
    //     c = get<0>(z[i]);
    //     d = get<1>(z[i]);
    //     e = get<2>(z[i]);
    //     cout << c << " " << d << " / id:" << e << endl;
    // }
    return 0;
}