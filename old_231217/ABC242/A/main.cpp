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

   si a, b, c, x;
   cin >> a >> b >> c >> x;

   double ans;
   if( x <= a ){
      ans = 1.0;
   }
   else if( x > b ){
      ans = 0.0;
   }
   else{
      ans = (double)c / ((double)b - (double)a); 
   }

   cout << ans;

   return 0;
}