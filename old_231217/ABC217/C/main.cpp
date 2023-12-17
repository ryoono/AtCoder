#include <iostream>

using namespace std;

typedef long long ll;

int main( void ){
    
    int n;
    cin >> n;

    int p[n];
    int q[n];

    for( int i=0; i<n; i++ ){
        cin >> p[i];
        q[p[i]-1] = i+1;
    }

    for( int i=0; i<n; i++ ){
        cout << q[i] << " ";
    }

    return 0;
}