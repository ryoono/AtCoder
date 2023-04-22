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

    si max = n-1;
    si min = 0;
    si mid = (max - min) / 2;

    while( min+1 != max ){

        si res;
        cout << "? " << mid+1 << endl << flush;
        cin >> res;
        if( res == 0 ){
            min = mid;
        }
        else{
            max = mid;
        }
        mid = min + ((max-min) / 2);
    }

    cout << "! " << min+1 << endl << flush;
    
    return 0;
}