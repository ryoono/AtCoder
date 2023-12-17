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

   si v, a, b, c;
   cin >> v >> a >> b >> c;
   
   while( v >= 0 ){
      if( (v = v - a) < 0 )   cout << "F";
      else if( (v = v - b) < 0 ) cout << "M";
      else if( (v = v - c) < 0 ) cout << "T";
   }
   return 0;
}