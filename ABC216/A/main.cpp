#include <iostream>

using namespace std;

int main( void ){

    int x, y;

    cin >> x >> "." >> y;

    cout << x << endl;
    cout << y;

    if( 0 <= y && y <= 2 ){
        cout << "-";
    }
    else if( 3 <= y && y <= 6 ){

    }
    else{
        cout << "+";
    }
    
    return 0;
}