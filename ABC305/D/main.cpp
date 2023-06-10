#include <iostream>
#include <vector>
#include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
// #include <queue>
// #include <stack>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){

    ui sleepSum = 0;
    ui n;
    cin >> n;

    vector<ui> a(n);
    cin >> a[0];
    for( si i=1; i<n; ++i ){
        cin >> a[i];
        if( !(i % 2) ){
            sleepSum += a[i]-a[i-1];  
        }
    }

    ui q;
    cin << q;

    vector<pair<ui,ui> > l(q);
    vector<pair<ui,ui> > r(q);
    for( ui i=0; i<q; ++i ){
        cin >> l[i].first >> r[i].first;
        l[i].second = r[i].second = i;
    }

    sort(l.begin(), l.end());   // 昇順
    sort(r.begin(), r.end(), std::greater<int>() ); // 降順

    ui sleeptime = 0;
    ui stime[q];
    for( ui i=0; i<q; ++i ) stime[i] = 0;
    for( ui i=0; i<n-1; ++i ){
        auto fposition = lower_bound(l.begin(), l.end(), a[i]);
        auto eposition = lower_bound(l.begin(), l.end(), a[i+1]);
        if( fposition != eposition ){
            for( auto p=fposition; p<eposition; ++p ){
                if( i%2 ){
                    stime[p->second] = sleeptime + p->first
                }
                else{
                    stime[p->second] = sleeptime;
                }
            }
        }
        if( i!=0 && !(i%2) ){
            sleeptime += a[i]-a[i-1];
        }
    }
    return 0;
}