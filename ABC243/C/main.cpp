#include <iostream>
#include <vector>
// #include <cmath>
#include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

#define RIGHT 1
#define LEFT 0

typedef long long ll;
typedef unsigned int ui;
typedef signed int si;

int main( void ){

   ui n;
   cin >> n;

   vector<vector<ui> > point( n, vector<ui>(3));
   for( ui i=0; i<n; ++i ){
      cin >> point[i][1] >> point[i][0];
   }

   string s;
   cin >> s;
   for( ui i=0; i<n; ++i ){
      if( s[i] == 'L' ){
         point[i][2] = LEFT;
      }
      else{
         point[i][2] = RIGHT;
      }
   }

   sort( point.begin(), point.end());

   ui nowY = point[0][0];
   ui is_right_moving = point[0][2];

   // cout << "Y:" << point[0][0] << " X:" << point[0][1] << " Move:" << point[0][2] << endl;
   for( ui i=1; i<n; ++i ){
      // cout << "Y:" << point[i][0] << " X:" << point[i][1] << " Move:" << point[i][2] << endl;
      if( nowY != point[i][0] ){
         nowY = point[i][0];
         is_right_moving = point[i][2];
      }
      else{
         if( is_right_moving == RIGHT ){
            if( point[i][2] == LEFT ){
               cout << "Yes";
               return 0;
            }
         }
         else{
            is_right_moving = point[i][2];
         }
      }
   }

   cout << "No";
   return 0;
}