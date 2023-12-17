#include <iostream>
#include <vector>
// #include <cmath>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef signed int si;

int main( void ){

   ui n;
   cin >> n;

   vector<ui> a(n), b(n);
   for( ui i=0; i<n; ++i ){
      cin >> a[i];
   }
   for( ui i=0; i<n; ++i ){
      cin >> b[i];
   }

   ui ans1 = 0;
   ui ans2 = 0;
   for( ui i=0; i<n; ++i ){
      for( ui j=0; j<n; ++j ){
         if( a[i] == b[j] ){
            if( i == j )   ++ans1;
            else           ++ans2;
         }
      }
   }

   cout << ans1 << endl << ans2;

   return 0;
}