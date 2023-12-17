#include <iostream>

using namespace std;

int main(){

   int a ,b;

   cin >> a >> b;

   if( b == 0 ){
      cout << "Gold";
      return 0;
   }
   else if( a == 0 ){
      cout << "Silver";
      return 0;
   }
   cout << "Alloy";
   return 0;
}