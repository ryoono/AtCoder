#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
// #include <set>
// #include <map>
// #include <cstring>
#include <stdio.h>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    string n;
    char aaa[20];
    scanf("%s", aaa);

    ui num;
    ui a=0, b=0;
    ui flag = 1;
    for( ui i=0; i<20; ++i ){
        if( aaa[i] == '\0' ){
            num = i;
            break;
        }
    }

    //cout << num << endl;

    for( ui i=0; i<num-1; ++i ){
        for( ui j=i+1; j<num; ++j ){
            if( aaa[i] < aaa[j] ){
                char bbb;
                bbb = aaa[j];
                aaa[j] = aaa[i];
                aaa[i] = bbb;
            }
        }
    }

    //cout << aaa << endl;

    for( ui i=0; i<num; ++i ){
        if( (flag % 4) >= 2 ){
            b = (b*10) + (aaa[i]-'0');
        }
        else{
            a = (a*10) + (aaa[i]-'0');
        }
        ++flag;
    }

    ll max = a*b;
    a = b = flag = 0;
    for( ui i=0; i<num; ++i ){
        if( (flag % 4) >= 2 ){
            b = (b*10) + (aaa[i]-'0');
        }
        else{
            a = (a*10) + (aaa[i]-'0');
        }
        ++flag;
    }

    if( max < (a*b) ){
        max = a*b;
    }

    a = b = flag = 0;
    for( ui i=0; i<num; ++i ){
        if( flag & 1 ){
            b = (b*10) + (aaa[i]-'0');
        }
        else{
            a = (a*10) + (aaa[i]-'0');
        }
        ++flag;
    }

    if( max < (a*b) ){
        max = a*b;
    }

    cout << max;

    return 0;
}