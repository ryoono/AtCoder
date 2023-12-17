#include <iostream>

using namespace std;

int main( void ){

    unsigned long long n;
    unsigned long long ans = 1;
    unsigned long long count = 0;

    cin >> n;

    while( ans <= n ){
        ans = ans << 1;
        ++count;
    }

    cout << count - 1;
    
    return 0;
}