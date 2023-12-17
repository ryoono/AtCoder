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

    ll n, m;
    cin >> n >> m;
    
    ll u[m], v[m];
    for( ll i=0; i<m; ++i ){
        cin >> u[i] >> v[i];
    }

    // 点と線によるパスグラフ判定
    // if( n != m+1 ){
    //     cout << "No" << endl;
    //     return 0;
    // }

    // 何回点が登場したかを保存
    ll num[200001];
    for( ll i=0; i<200001; ++i ){
        num[i] = 0;
    }

    // 登場した点をインクリメント
    for( ll i=0; i<m; ++i ){
        // cout << u[i]-1 << "-" << v[i]-1 << endl;
        ++num[u[i]-1];
        ++num[v[i]-1];
    }
    ll one_ = 0;
    ll two_ = 0;
    ll other_ = 0;
    // 登場数を確認
    for( ll i=0; i<n; ++i ){
        if( num[i] == 1 )   ++one_;
        else if( num[i] == 2 ) ++two_;
        else ++other_;
    }
    // cout << one_ << endl;
    // cout << two_ << endl;
    // cout << other_ << endl;
    if( (one_ == 2) && (two_ == (n-2)) ){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}