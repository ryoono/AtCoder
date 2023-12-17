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

   string s;
   cin >> s;

   si a[10] = {0};
   for( si i=0; i<10; ++i ){
      a[s[i]-'0'] = 1;
   }
   
   for( si i=0; i<10; ++i ){
      if( !a[i] ){
         cout << i;
         return 0;
      }
   }
   return 0;
}