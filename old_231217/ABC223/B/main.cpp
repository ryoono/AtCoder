#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
#include <string>


using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    string s;
    string max_;
    string min_;

    cin >> s;
    max_ = s;
    min_ = s;

    //cout << s.size() << endl;

    for( ui i=1; i<s.size(); ++i ){
        string ss = s;
        string buf1 = ss.substr(i);
        string buf2 = ss.erase(i);

        string buf = buf1 + buf2;

        if( max_ < buf )    max_ = buf;
        if( buf < min_ )    min_ = buf;

        //cout << i << endl;
    }

    cout << min_ << endl << max_;


    return 0;
}