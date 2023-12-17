#include <iostream>
#include <vector>
#include <algorithm>
// #include <set>
// #include <map>
// #include <cstring>
// #include <queue>
#include <stack>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){

    si n, m;
    cin >> n >> m;

    // 点ごとに接続先を記録
    vector<vector<int> > line(n);
    for( si i=0; i<m; ++i ){
        si u, v;
        cin >> u >> v;
        --u;
        --v;
        line[u].push_back(v);
        line[v].push_back(u);
    }

    // 点と線によるパスグラフ判定
    if( n != m+1 ){
        cout << "No" << endl;
        return 0;
    }

    // 点から伸びている線が3本以上ないかの判定
    for( si i=0; i<n; ++i ){
        if( line[i].size() > 2 ){
            cout << "No" << endl;
            return 0;
        }
    }

    // 1度行ったことがある点か否かの判断変数初期化
    bool done[n];
    // 点ごとのlineが指し示すindex
    si line_idx[n];
    for( si i=0; i<n; ++i ){
        done[i] = false;
        line_idx[i] = 0;
    }

    // グラフ探索
    stack<int> st;
    // 点0からスタート
    // 全ての点に行ければパスグラフ
    st.push(0);
    while( !st.empty() ){
        si now_point = st.top();
        done[now_point] = true;

        // 次の接続先があればスタックを更新する
        // なければ，終端とみなし，スタックからポップする
        if( line_idx[now_point] < line[now_point].size() ){
            st.push( line[now_point][line_idx[now_point]] );
            ++line_idx[now_point];
        }
        else{
            st.pop();
        }
    }

    // 全ての点に到達しているかの判定
    for( si i=0; i<n; ++i ){
        if( done[i] == false ){
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

    return 0;
}