#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

   long H, W, N;
   cin >> H >> W >> N;

   vector<long> A(N);
   vector<long> B(N);
   vector<long> sA(N);
   vector<long> sB(N);
   for( long i=0; i<N; i++ )  cin >> A[i] >> B[i];

   copy( A.begin(), A.end(), sA.begin());
   copy( B.begin(), B.end(), sB.begin());

   sort( sA.begin(), sA.end());
   sort( sB.begin(), sB.end());

   sA.erase( std::unique( sA.begin(), sA.end()), sA.end());
   sB.erase( std::unique( sB.begin(), sB.end()), sB.end());

   vector<long> positionA;
   vector<long> positionB;
   for( long i=0; i<N; i++ ){
      //positionA = lower_bound( sA.begin(), sA.end(), A[i]);
   }

   return 0;
}