#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef unsigned int ui;

int main( void ){
    
    vector<ui> cut;

    ui l, q;
    cin >> l >> q;

    ui c[q];
    ui x[q];
    for( ui i=0; i<q; ++i ){
        cin >> c[i] >> x[i];
    }

    // cout << cut.size() << endl;
    
    // 処理開始
    for( ui i=0; i<q; ++i ){
        
        // 切る作業
        if( c[i] == 1 ){
            cut.push_back(x[i]);
            // cout << cut.size() << endl;
        }
        // 長さを測る作業
        else{

            // 例外処理
            // 1度も切ってない場合
            if( cut.size() == 0 ){
                cout << l << endl;
                continue;
            }
            // 1回しか切っていない場合
            else if( cut.size() == 1 ){
                if( cut[0] > x[i] ){
                    cout << cut[0] << endl;
                }
                else{
                    cout << l-cut[0] << endl;
                }
                continue;
            }
            // 長さを測りたい場所が右端の場合
            else if( cut[cut.size()-1] < x[i] ){
                cout << l-cut[cut.size()-1] << endl;
                continue;
            }
            // 長さを測りたい場所が左端の場合
            else if( cut[0] > x[i] ){
                cout << cut[0] << endl;
                continue;
            }

            // 切ってある場所を昇順ソート
            // 長さを測りたい場所がどこかを検索
            sort( cut.begin(), cut.end());

            ui min, max, mid;
            min = 0;
            max = cut.size();

            while( (max - min) != 1 ){
                mid = min + (( max - min ) / 2);
                // cout << "max : " << max << endl;
                // cout << "min : " << min << endl;
                // cout << "mid : " << mid << endl;
                // cout << endl;
                if( cut[mid] < x[i] ){
                    min = mid;
                }
                else{
                    max = mid;
                }
            }
            
            // 長さを出力
            cout << (cut[max] - cut[min]) << endl;
        }
    }

    return 0;
}