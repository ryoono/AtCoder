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

    si dis[6] = { 3, 1, 4, 1, 5, 9};
    char pb, qb, p, q;
    cin >> pb >> qb;

    p = min( pb, qb);
    q = max( pb, qb);

    si ans = 0;
    for( char i=p-'A'; i<q-'A'; ++i ){
        ans += dis[i];
    }

    cout << ans;
    return 0;
}