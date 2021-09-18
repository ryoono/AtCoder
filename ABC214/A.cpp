#include <iostream>

using namespace std;

int main( void ){

   long a;

   cin >> a;

   if( a < 126 ){
      cout << "4";
   }
   else if( a < 212 ){
      cout << "6";
   }
   else{
      cout << "8";
   }

   return 0;
}