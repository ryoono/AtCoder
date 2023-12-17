#include <iostream>

using namespace std;

int main( void ){
    
    unsigned long long n;
    cin >> n;
    
    char out[128];
    char outb[128];
    int count = 0;
    int countb = 0;

    while( n != 1 ){

        if( n & 1 ){
            n -= 1;
            out[count] = 'A';
        }
        else{
            n >>= 1;
            out[count] = 'B';
        }
        ++count;
    }

    cout << "A";
    --count;
    while( count >= 0 ){
        if( count == -1 )break;
        cout << out[count];
        --count;
    }

    return 0;
}