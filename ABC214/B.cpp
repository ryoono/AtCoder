#include <iostream>

using namespace std;

int main( void ){

   long s, t;
   cin >> s >> t;

   long a, b, c;
   long count = 0;

   for( long i=0; i<=s; i++ ){
      for( long j=0; j<=s; j++ ){
         for( long k=0; k<=s; k++ ){
            if( ((i + j + k) <= s ) && ((i * j * k) <= t ))  count++;
         }
      }
   }

   cout << count;

   return 0;
}