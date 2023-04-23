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

    // 2分探索により，隣あう場所を特定する．
    si max = n-1;
    si min = 0;
    si mid = (max - min) / 2;

    while( min+1 != max ){

        // 問題文と実際の配列idxで2回間違えた  
        // どうすればミスが減るかは謎
        si res;
        cout << "? " << mid+1 << endl << flush;
        cin >> res;
        // 0の場合は右側を対象にする(1は左側を対象)
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