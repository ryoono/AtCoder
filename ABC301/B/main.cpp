#include <iostream>
#include <vector>
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
    si a[n];
    si ans[100*101];
    si ans_idx = 0;

    cin >> n;
    for( si i=0; i<n; ++i ){
        cin >> a[i];
    }

    ans[ans_idx++] = a[0];
    for( si i=1; i<n; ++i ){
        if( (a[i-1]-1 != a[i]) && (a[i-1]+1 != a[i]) ){
            if( a[i-1] > a[i] ){
                for( si j=a[i-1]-1; j>a[i]; --j ){
                    ans[ans_idx++] = j;
                }
            }
            else if( a[i-1] < a[i] ){
                for( si j=a[i-1]+1; j<a[i]; ++j ){
                    ans[ans_idx++] = j;
                }
            }
        }
        ans[ans_idx++] = a[i];
    }

    for( si i=0; i<ans_idx; ++i ){
        cout << ans[i] << " ";
    }
    return 0;
}