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

    si n, m;
    cin >> n >> m;

    vector<pair<si,si> > l(m);

    for( si i=0; i<m; ++i ){
        si tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        --tmp1; // 0基準に戻す
        --tmp2; // 0基準に戻す
        l[i].first = tmp1;
        l[i].second = tmp2;
    }

    // 点/線の数の関係を確認
    if( n != m+1 ){
        cout << "No" << endl;
        return 0;
    }

    sort( l.begin(), l.end());

    // 0基準に変換
    n-=1;



    return 0;
}