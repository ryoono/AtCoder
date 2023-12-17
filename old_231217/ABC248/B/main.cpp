#include <iostream>
// #include <vector>
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

   ll a, b, k;
   cin >> a >> b >> k;

   ll cnt = 0;
   if( a == b ){
      cout << cnt;
      return 0;
   }
   while(1){
      ++cnt;
      if( a*k >= b ){
         break;
      }
      a *= k;
   }

   cout << cnt;

   return 0;
}