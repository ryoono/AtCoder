#include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){

    ui n;
    cin >> n;

    double time_sum = 0.0;
    double center_time;

    ui a[n], b[n];
    for( ui i=0; i<n; ++i ){
        cin >> a[i] >> b[i];
        time_sum += ((double)a[i] / (double)b[i]);
    }
    // cout << "time_sum " << time_sum << endl;

    center_time = time_sum /2.0;

    double elapsed_time = 0.0;
    double moved_distance_res;
    ui moved_distance = 0;
    ui point;
    
    for( ui i=0; i<n; ++i ){

        double time = ((double)a[i] / (double)b[i]);
        point = i;

        if( (double)elapsed_time + (double)time >= (double)center_time ){
            break;
        }

        elapsed_time += time;
        moved_distance += a[i];
    }

    moved_distance_res = (double)moved_distance + (((double)center_time-(double)elapsed_time) * (double)b[point]);

    // cout << "moved_distance " << moved_distance << endl;
    // cout <<  "center_time " << center_time << endl;
    // cout << "elapsed_time " << elapsed_time << endl;
    // cout << "b[point] : b[" << point << "] " << b[point] << endl;

    cout << moved_distance_res;
    
    return 0;
}