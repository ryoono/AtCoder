#include <iostream>
#include <vector>
// #include <cmath>
#include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
#include <regex>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef signed int si;

int main( void ){

   ll n, x;
   cin >> n >> x;

   string s;
   cin >> s;

   ll box[n];
   ll readPoint = 0;
   ll writePoint = 0;

   for( ll i=n-1; i>=0; --i ){
      // cout << "1" << endl;
      if( s[i] == 'U' ){
         box[readPoint] = i;
         ++readPoint;
      }
      else{
         if( readPoint != writePoint ){
            s[i] = '0';
            s[box[writePoint]] = '0';
            ++writePoint;
         }
      }
   }

   for( ll i=0; i<n; ++i ){
      // cout << "2" << endl;
      if( s[i] == 'R' ){
         x <<= 1;
         x += 1;
      }
      else if( s[i] == 'L' ){
         x <<= 1;
      }
      else if( s[i] == 'U' ){
         x >>= 1;
      }
   }

   cout << x;

   return 0;
}