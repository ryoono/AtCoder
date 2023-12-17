#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string s;
string sb;
int k;
int str_num;
int used[8];
int counter;

vector<string> res;

void create_string(){

    for( int i=0; i<str_num; i++ ){
        if( used[i] )   continue;
        used[i] = 1;
        ++counter;
        sb.push_back( s[i] );

        if( counter == str_num ){
            res.push_back(sb);
        }
        else{
            create_string();
        }
        
        sb.pop_back();
        used[i] = 0;
        --counter;
    }
    return;
}

int main( void ){

    cin >> s >> k;

    str_num = s.length();
    create_string();

    sort( res.begin(), res.end());
    unique( res.begin(), res.end());

    cout << res[k-1];

    return 0;
}