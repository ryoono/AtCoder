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

si my_pow( int x, int y){
   si ans = x;
   for( si i=1; i<y; ++i ){
      ans *= x;
   }
   return ans;
}

int main( void ){

   si n, k;
   cin >> n >> k;

   string s[n];
   for( si i=0; i<n; ++i ){
      cin >> s[i];
   }

   si exist[n][26];
   for( si i=0; i<n; ++i ){
      for( si j=0; j<26; ++j ){
         exist[i][j] = 0;
      }
   }
   for( si i=0; i<n; ++i ){
      for( si j=0; j<s[i].size(); ++j ){
         exist[i][s[i][j]-'a'] = 1;
      }
   }

   si cnt;
   si ans = 0;
   si ans_max = ans;
   si pattern = 0;
   while( pattern <= my_pow( 2, n+1) ){
      //cout << pattern << endl;
      for( si i=0; i<26; ++i ){
         cnt = 0;
         for( si j=0; j<n; ++j ){
            if( (pattern >> j) & 1 ){
               if( exist[j][i] ) ++cnt;
            }
         }
         if( cnt == k ) ++ans;
      }
      if( ans_max < ans )  ans_max = ans;
      ans = 0;
      ++pattern;
   }

   cout << ans_max;
   
   return 0;
}