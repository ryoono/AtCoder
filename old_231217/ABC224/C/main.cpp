#include <iostream>
#include <vector>
#include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

#define L10_9 1000000000

// コピペ
// https://note.com/kazusasan/n/n9ea759286ea3
// 最大公約数
int gcd( int a, int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

int abs( int a ){
    
    if( a < 0 ){
        return a * -1;
    }
    return a;
}

int main( void ){

    int n;
    cin >> n;

    vector<pair<int,int>> p(n);
    int inx, iny;
    int res = 0;

    for( int i=0; i<n; ++i ){
        cin >> inx >> iny;
        p[i] = make_pair( inx + L10_9, iny + L10_9);
    }

    sort( p.begin(), p.end());

    // cout << "debug begin" << endl;
    // for( ui i=0; i<n; ++i ){
    //     cout << p[i].first << ", " << p[i].second << endl;
    // }
    // cout << "debug end" << endl;

    // 1点目
    for( int i=0; i<n-2; ++i ){
        // 2点目
        for( int j=i+1; j<n-1; ++j ){
            // 3点目
            for( int k=j+1; k<n; ++k ){

                // 傾きの計算

                // xの差とyの差の最大公約数
                int lcm1, lcm2;

                if( p[j].first != p[i].first && p[j].second != p[i].second ){
                    lcm1 = gcd( p[j].first - p[i].first, abs( p[j].second - p[i].second ));
                }
                else{
                    lcm1 = 0;
                }
                // cout << j << " ," << i << " : " << p[j].first - p[i].first << " ," << p[j].second - p[i].second << endl;
                // cout << "lcm1 : " << lcm1 << endl;

                if( (p[k].first != p[i].first)  && (p[k].second != p[i].second) ){
                    lcm2 = gcd( p[k].first - p[i].first, abs(p[k].second - p[i].second));
                }
                else{
                    lcm2 = 0;
                }
                // cout << k << " ," << i << " : " << p[k].first - p[i].first << " ," << p[k].second - p[i].second << endl;
                // cout << "lcm2 : " << lcm2 << endl;
                // lcm1 = lcm( p[j].first - p[i].first, p[j].second - p[i].second);
                // lcm2 = lcm( p[k].first - p[j].first, p[k].second - p[j].second);
                
                // xの差とyの差の比
                int difopt1x, difopt1y;
                int difopt2x, difopt2y;
                if( lcm1 != 0 ){
                    difopt1x = (p[j].first - p[i].first) / lcm1;
                    difopt1y = (p[j].second - p[i].second) / lcm1;
                }
                else{
                    difopt1x = p[j].first - p[i].first;
                    difopt1y = p[j].second - p[i].second;
                }

                if( lcm2 != 0 ){
                    difopt2x = (p[k].first -p[i].first) / lcm2;
                    difopt2y = (p[k].second - p[i].second) / lcm2;
                }
                else{
                    difopt2x = p[k].first - p[i].first;
                    difopt2y = p[k].second - p[i].second;
                }

                // cout << "difopt1x, difopt1y : " << difopt1x << ", " << difopt1y << endl;
                // cout << "difopt2x, difopt2y : " << difopt2x << ", " << difopt2y << endl;

                // 同じ傾き上に無い場合、正の面積を持つ三角形
                if( (difopt1x == 0 && difopt2x == 0) || (difopt1y == 0 && difopt2y == 0) ){
                    continue;
                }
                if( (difopt1x != difopt2x) || (difopt1y != difopt2y) ){
                    ++res;
                }
            }
        }
    }

    cout << res;

    return 0;
}