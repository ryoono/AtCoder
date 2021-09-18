

#include <stdio.h>
#include <string.h>


int main( void ){

    int x, y;

    scanf("%d.%d", &x, &y);

    printf("%d", x);

    if( 0 <= y && y <= 2 ){
        printf("-");
    }
    else if( 3 <= y && y <= 6 ){

    }
    else{
        printf("+");
    }

    return 0;
}