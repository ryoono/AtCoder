#include <iostream>
// #include <vector>
// #include <cmath>
// #include <algorithm>
// #include <set>
#include <map>
// #include <cstring>
// #include <regex>
#include <string>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef signed int si;

int main( void ){

   multimap<ui,ui> mp;
   ui n;
   cin >> n;
   ui buf;
   for( si i=0; i<n; ++i ){
      cin >> buf;
      // string str_buf = to_string(buf);
      mp.insert(pair<ui,ui>(buf, i));
   }
   auto itr = mp.find(1);
   if( itr == mp.end() ){
      // ない
   }
   
   // pair<multimap<ui, ui>::iterator, multimap<ui,ui>::iterator> range = mp.equal_range(1);
   return 0;
}