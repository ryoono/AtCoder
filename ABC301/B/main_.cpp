#include <iostream>
//#include <vector>
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

    si n = 0;
    si a[n];
    si ans[100*101];
    si ans_idx = 0;

    cin >> n;
    for( si i=0; i<n; ++i ){
        cin >> a[i];
    }

    for( si i=0; i<n; ++i ){
        cout << a[i] << " ";
    }
    cout << endl;

    ans[ans_idx] = a[0];
  ans_idx++;

    for( si i=1; i<n; ++i ){

        for( si i=0; i<n; ++i ){
        cout << a[i] << " ";
    }
    cout << endl;
        if( (a[i-1]-1 != a[i]) && (a[i-1]+1 != a[i]) ){
            if( a[i-1] > a[i] ){
              cout << "OK" << endl;
              cout << a[i-1]-1 << endl;
              cout << a[i] << endl;
                for( si j=a[i-1]-1; j>a[i]; --j ){
                  cout << j << endl;
                    ans[ans_idx] = j;
                  ans_idx++;
                }
            }
            else if( a[i-1] < a[i] ){
                for( si j=a[i-1]+1; j<a[i]; ++j ){
                    ans[ans_idx] = j;
                  ans_idx++;
                }
            }
        }
        for( si i=0; i<n; ++i ){
        cout << a[i] << " ";
    }
        ans[ans_idx] = a[i];
      ans_idx++;
      for( si i=0; i<n; ++i ){
        cout << a[i] << " ";
    }
    }
    for( si i=0; i<ans_idx; ++i ){
        cout << ans[i] << " ";
    }
    return 0;
}