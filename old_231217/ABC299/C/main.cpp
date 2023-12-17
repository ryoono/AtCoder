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

    si n;
    cin >> n;
    string s;
    cin >> s;

    si ans = 0;
    si renzoku = 0;
    for( si i=0; i<n; ++i ){
        // 連続したoを記録する
        if( s[i] == 'o' ){
            ++renzoku;
        }
        else{
            // ooo-のパターンを確認する
            ans = max(ans, renzoku);
            renzoku = 0;
        }
    }
    // -oooのパターンを確認する
    ans = max(ans, renzoku);

    if( ans == n || ans == 0){
        cout << -1;
    }
    else{
        cout << ans;
    }
    return 0;
}