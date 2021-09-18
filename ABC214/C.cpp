#include <iostream>

using namespace std;

int main( void ){

   long n;
   cin >> n;

   long s[n], t[n];
   long ok[n];
   long pos[n];
   long count = 0;
   long nowtime = 1;
   for( long i=0; i<n; i++ )  cin >> s[i];
   for( long i=0; i<n; i++ ){
      cin >> t[i];
      ok[i] = 0;
      pos[i] = -1;
   }

   // cout << "n " << n << endl;
   // cout << "s" << endl;
   // for( long i=0; i<n; i++ )  cout << s[i] << endl;
   // cout << endl;

   // cout << "t" << endl;
   // for( long i=0; i<n; i++ )  cout << t[i] << endl;
   // cout << endl;

   while(true){

      for( long i=0; i<n; i++ ){
         if( t[i] == nowtime ){
            pos[i] = nowtime;
            if( ok[i] == 0 ){
               ok[i] = nowtime;
               count++;
            }
         }

         if( (pos[i] != -1) && (nowtime - pos[i] == s[i]) ){
            pos[i] = -1;
            long posbuff = i+1;
            if( posbuff == n ) posbuff = 0;  
            pos[posbuff] = nowtime;
            if( ok[posbuff] == 0 ){
               ok[posbuff] = nowtime;
               count++;
            }
         }
      }

      // cout << nowtime << endl;
      // for( long i=0; i<n; i++ )  cout << pos[i] << endl;
      // cout << endl;

      nowtime++;
      if( count >= n )  break;
   }

   for( long i=0; i<n; i++ )  cout << ok[i] << endl;

   return 0;
}