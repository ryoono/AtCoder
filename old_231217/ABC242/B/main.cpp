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

   si moji[26] = {0};

   for( si i=0; i<s.size(); ++i ){
      ++moji[s[i] - 'a'];
   }

   for( si i=0; i<26; ++i ){
      for( si j=0; j<moji[i]; ++j ){
         cout << (char)(i + 'a');
      }
   }

   return 0;
}