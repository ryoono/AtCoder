#include <iostream>
// #include <vector>
// #include <algorithm>
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

    string s;
    ll n;

    cin >> s;
    cin >> n;

    ll keta = 1;
    ll hoge = 1;
    if( n == 1 ){
        keta = 1;
    }
    else{
        while( true ){
            keta += 1;
            hoge <<= 1;
            ++hoge;
            if( hoge >= n ) break;
        }
    }
    ll s_size = s.size();
    if( s_size < keta )   keta = s.size();
    
    ll sum = 0;
    ll idx = 1;
    
    // cout << s.size()-1 << endl;
    // cout << s.size()-keta << endl;
    ll f = s.size()-1;
    ll e = s.size()-keta;

    for( ll i=f; i>=0; --i ){
        // cout << i << endl;
        if( s[i] == '1' ) sum += idx;
        idx <<= 1;
    }
    if( sum > n ){
        cout << -1;
        return 0;
    }

    sum = 0;
    idx = 1;

    //for( ll i=s.size()-1; i>=s.size()-keta; --i ){
    for( ll i=f; i>=e; --i ){
        // cout << i << endl;
        if( s[i] == '1' ) sum += idx;
        idx <<= 1;
    }
    idx >>= 1;
    // cout << "OK" << endl;

    if( sum > n ){
        cout << -1;
        return 0;
    }

    for( ll i=e; i<s_size; ++i ){
        if( s[i] == '?' ){
            sum += idx;
            if( sum > n ){
                sum -= idx;
            }
        }
        idx >>= 1;
    }

    cout << sum;

    return 0;
}