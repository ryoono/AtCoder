#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){

    ll n, a, b;
    string s;

    cin >> n >> a >> b;
    cin >> s;

    string sb[n];
    ll ans_b[n];

    // 右端移動処理_全パターン
    for( si i=0; i<n; ++i ){
        sb[i] = s.substr(i) + s.substr( 0, i);
        ans_b[i] = a * i;
        // cout << i << ":" << sb[i] << endl;
    }

    // cout << s[0] << endl;
    // for( si i=0; i<n; ++i ){
    //     cout << sb[i][0] << endl;
    // }

    // 
    // if( n%2 ) kai_comp = (n-1)/2;
    ll kai_comp = (n/2)-1;
    // cout << "kai_comp:" << kai_comp << endl;
    for( si i=0; i<=kai_comp; ++i){
        // 全パターン確認
        for( si j=0; j<n; ++j ){
            if( sb[j][i] != sb[j][n-1-i] ){
                // cout << "sb[" << i << "][" << j << "]:" << sb[j][i] << ", s:" << s[n-1-i] << endl;
                ans_b[j] += b;
            }
        }
    }

    // cout << "s:" << s << endl;

    ll ans = ans_b[0];
    // cout << "ans" << endl;
    for( si i=0; i<n; ++i ){
        // cout << ans_b[i] << endl;
        ans = min( ans, ans_b[i] );
    }

    cout << ans << endl;

    return 0;
}