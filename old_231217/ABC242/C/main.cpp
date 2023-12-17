#include <iostream>
// #include <vector>
// #include <cmath>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

#define L 998244353

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef signed int si;

int main( void ){

   ui n;
   cin >> n;

   ui ans = 25;

   for( ui i=2; i<n; ++i ){
      ans = (ans * 25) % L;
      cout << ans << endl;
   }

   cout << ans;

   return 0;
}