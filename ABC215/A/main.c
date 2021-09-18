

#include <stdio.h>
#include <string.h>


int main( void ){

    char s[256];
    char ans[] = "Hello,World!";

    scanf("%s", s);

    if( strcmp( s, ans) == 0 )  printf("AC");
    else    printf("WA");

    return 0;
}