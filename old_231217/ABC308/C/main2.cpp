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

int main( void ){

    si n;
    cin >> n;

    vector<pair<dl,si> > coin(n);
    for( si i=0; i<n; ++i ){
        dl a, b;
        cin >> a >> b;
        coin[i].second = i+1;
        coin[i].first = a / (a + b);
    }

    sort( coin.begin(), coin.end(), greater<pair<dl,si> >() );

    for( si i=0; i<n; ++i ){
        cout << coin[i].second << " ";
    }
    cout << endl;

    return 0;
}