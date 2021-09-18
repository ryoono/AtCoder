#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

int main(){

   // a[n], a[m]
   long n, m;

   cin >> n >> m;

   long a[n], b[m];
   long min = 9223372036854775807;
   long buff;

   long i, j;

   for( i=0; i<n; i++ ){
      cin >> a[i];
   }
   for( j=0; j<m; j++ ){
      cin >> b[j];

      for( i=0; i<n; i++ ){
         buff = abs( a[i]-b[j] );
         if( min > buff ){
            min = buff;
         }
      }
   }

   // min = abs( a[0]-b[0] );

   // for( i=0; i<n; i++ ){
   //    for( j=0; j<m; m++ ){

   //       buff = abs( a[i]-b[j] );
   //       if( min > buff ){
   //          min = buff;
   //       }
   //    }
   // }

   cout << min;

   return 0;
}