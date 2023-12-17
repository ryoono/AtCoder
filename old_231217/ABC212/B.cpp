#include <iostream>

using namespace std;

int main(){

   int input;
   int a, b, c, d;

   cin >> input;

   a = input / 1000;
   b = (input % 1000) / 100;
   c = (input % 100) / 10;
   d = (input % 10);

   // 1. 4桁とも同じ数字である。
   if( a == b && b == c && c == d ){
      cout << "Weak";
      return 0;
   }

   // 2.
   if( (b - a == 1 || b - a == -9) &&
         (c - b == 1 || c - b == -9) &&
         (d - c == 1 || d - c == -9) )
         {
            cout << "Weak";
            return 0;
         }
   
   cout << "Strong";
   return 0;
}