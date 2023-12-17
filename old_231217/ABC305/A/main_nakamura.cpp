#include <iostream>
// #include <cmath>
// #include <iomanip>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){
  int n;
  cin >> n;

  int last, dis;
  // 通過済み給水ポイント
  last = n / 5 * 5;

  // 走行距離の下一桁
  dis = n % 5;
  // 給水ポイントにいる
  if(dis == 0){
    cout << n;
  // 戻る
  }else if(dis == 1 || dis == 2){
    cout << last;
  }else if(dis == 3 || dis == 4){
    cout << last + 5;
  }
}
