#include <iostream>
// #include <vector>
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

int main( void ){

    string s, t;
    cin >> s;
    cin >> t;

    si s1, s2, t1, t2;
    s1 = (si)(s[0]-'A');
    s2 = (si)(s[1]-'A');
    t1 = (si)(t[0]-'A');
    t2 = (si)(t[1]-'A');

    si sa1=0, sa2=0;
    sa1 = max(s1, s2) - min(s1, s2);
    sa2 = max(t1, t2) - min(t1, t2);
    if( sa1 == 4 ) sa1 = 1;
    if( sa2 == 4 ) sa2 = 1;
    if( sa1 == 3 ) sa1 = 2;
    if( sa2 == 3 ) sa2 = 2;
    if( sa1 == sa2 ){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}