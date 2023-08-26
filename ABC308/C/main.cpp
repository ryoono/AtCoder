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
typedef double dl;

struct str_coin{
    dl par;
    si num;
    si a;
    si b;

    // 最後のconstを忘れると"instantiated from here"というエラーが出てコンパイルできないので注意
    bool operator<( const str_coin& right ) const {
        return par == right.par ? num < right.num : par < right.par;
    }
};

int main( void ){

    si n;
    cin >> n;

    vector<str_coin> coin(n);
    for( si i=0; i<n; ++i ){
        cin >> coin[i].a >> coin[i].b;
        coin[i].num = i+1;
        coin[i].par = (dl)coin[i].a / (dl)(coin[i].a + coin[i].b);
    }

    sort( coin.begin(), coin.end(), greater<str_coin>() );

    for( si i=0; i<n; ++i ){
        cout << coin[i].num << " ";
    }
    cout << endl;

    return 0;
}