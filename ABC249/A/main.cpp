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

   si a, b, c, d, e, f, x;
   cin >> a >> b >> c >> d >> e >> f >> x;

   si xx = x;
   si walk_a = 0;
   si walk_b = 0;
   while(1){
      if( xx-a <= 0 ){
         walk_a += xx;
         break;
      }
      else{
         walk_a += a;
         xx -= a;
      }

      if( xx-c <= 0 ){
         break;
      }
      xx -= c;

      // cout << "walk_a : " << walk_a << endl;
      // cout << "xx : " << xx << endl;
   }
   // cout << "end" << endl;
   // cout << "walk_a : " << walk_a << endl;
   // cout << "xx : " << xx << endl;
   xx = x;
   while(1){
      if( xx-d <= 0 ){
         walk_b += xx;
         break;
      }
      else{
         walk_b += d;
         xx -= d;
      }

      if( xx-f <= 0 ){
         break;
      }
      xx -= f;
      // cout << "walk_b : " << walk_b << endl;
      // cout << "xx : " << xx << endl;
   }
   // cout << "end" << endl;
   // cout << "walk_b : " << walk_b << endl;
   // cout << "xx : " << xx << endl;

   if( (walk_a*b) > (walk_b*e) ){
      cout << "Takahashi";
   }
   else if( (walk_a*b) < (walk_b*e) ){
      cout << "Aoki";
   }
   else{
      cout << "Draw";
   }
   return 0;
}
