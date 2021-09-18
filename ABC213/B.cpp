#include <iostream>

using namespace std;

int main(){

   int N;
   cin >> N;

   int A[N];
   long min = 0;
   long bubi = 0;
   int min_num = 0;
   int bubi_num = 0;

   for( int i=0; i<N; i++ ){
      cin >> A[i];
      if( min < A[i] ){
         bubi_num = min_num;
         bubi = min;
         min_num = i+1;
         min = A[i];
      }
      else if( bubi < A[i] ){
         bubi_num = i+1;
         bubi = A[i];
      }
   }

   cout << bubi_num;

   return 0;
}