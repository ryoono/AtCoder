#include <iostream>
// #include <vector>
// #include <cmath>
#include <algorithm>
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

   sort( s.begin(), s.end());

   si oomoji = 0;
   si komoji = 0;
   si soui = 1;

   for( si i=0; i<s.size(); ++i ){
      if( i+1 != s.size() ){
         if( s[i] == s[i+1] ){
            soui = 0;
         }
      }
      if( 'a' <= s[i] && s[i] <= 'z' ){
         komoji = 1;
      }
      if( 'A' <= s[i] && s[i] <= 'Z' ){
         oomoji = 1;
      }
   }

   if( oomoji == 1 && komoji == 1 && soui == 1 ){
      cout << "Yes";
   }
   else{
      cout << "No";
   }

   return 0;
}