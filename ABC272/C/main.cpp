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

    ui n;
    cin >> n;

    vector<ui> a(n);
    ui gu1, gu2, ki1, ki2;
    gu1 = gu2 = ki1 = ki2 = 0;
    for( ui i=0; i<n; ++i ){
        cin >> a[i];
        // 1番大きい偶数 2番目に大きい偶数
        // 1番大きい奇数 2番目に大きい奇数の算出
        if( a[i] & 1 ){
            if( ki1 < a[i] ){
                ki2 = ki1;
                ki1 = a[i];
            }
            else if( ki2 < a[i] ){
                ki2 = a[i];
            }
        }
        else{
            if( gu1 < a[i] ){
                gu2 = gu1;
                gu1 = a[i];
            }
            else if( gu2 < a[i] ){
                gu2 = a[i];
            }
        }
    }

    // sort( a.begin(), a.end());
    // a.erase( unique( a.begin(), a.end()), a.end());

    ui num = a.size();
    // ui ans = 0;
    // ui buf;

    //偶数が存在しない場合の判定
    if( num == 2 ){
        if( (a[0] + a[1]) & 1 ){
            cout << -1;
            return 0;
        }
    }

    ui ans = 0;
    ans = max( ans, gu1+gu2);
    ans = max( ans, ki1+ki2);

    cout << ans;
    // 1番大きい偶数 2番目に大きい偶数
    // 1番大きい奇数 2番目に大きい奇数の算出
    

    // // 後ろから計算して、最初の偶数が最大値
    // for( ui i=num-1; i>0; ++i ){
    //     buf = a[i] + a[i-1];
    //     cout << a[i] << " " << a[i-1] << " " << buf << endl;
    //     if( !(buf & 1) ){
    //         cout << buf;
    //         return 0;
    //     }
    // }
    // for( ui i=0; i<num-1; ++i ){
    //     for( ui j=i+1; j<num; ++j ){
    //         buf = a[i] + a[j];
    //         if( buf & 1 )   continue;
    //         ans = buf;
    //     }
    // }

    // if( ans ){
    //     cout << ans;
    // }
    // else{
    //     cout << -1;
    // }

    return 0;
}