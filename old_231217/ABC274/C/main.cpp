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

    ui n;
    cin >> n;
    ui ans_a = 2*n+1;
    ui ans[ans_a];
    ans[0] = 0; // 1世代目
    ans[1] = 1; // 2世代目
    ans[2] = 1; // ↑
    // ui a[n];
    // for( ui )
    for( ui i=0; i<n; ++i ){
        ui buf;
        cin >> buf;
        // 一回目の読み込みは捨てる
        if( i ){
            ui sedai;
            sedai = ans[buf-1] + 1;
            ans[(i+1)*2-1] = sedai;
            ans[(i+1)*2] = sedai;
        }
    }

    for( ui i=0; i<ans_a; ++i ){
        cout << ans[i] << endl;
    }

    return 0;
}