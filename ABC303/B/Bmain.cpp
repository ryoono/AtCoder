#include <iostream>
// #include <algorithm>

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef int si;

int main( void ){
  int n, m;
  cin >> n >> m;
  // ここ問題文読むと
  // 「m試合，n人」だから，配列の1次元と2次元を逆にするね
  int a[m][n];
  // int a[n][m];
  int rela[n][n];

  // 入力
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      // ここ，relaのindexは「0 ~ a[i,j]-1」なので，
      // 最初から-1した値で保持すると，後々indexの範囲を考えなくて済むかも
      // 以下のように修正
      int buff;
      cin >> buff;
      a[i][j] = buff-1;
      // cin >> a[i][j];
    }
  }

  // リレーション初期化
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i == j){
        rela[i][j] = 1;
      }else{
        rela[i][j] = 0;
      }
    }
  }

  cout << "debug" << endl;

  // ここでやりたいことって，隣合わせの人を確認したいのだと思うから，そういうつもりで見るけど
  // rela[(a[i][j])][(a[i+1][j+1])] ← 「a[i+1][j+1]」これだと次の試合の次の人になっちゃう
  // 多分書きたかったことは「a[i][j+1]」かな
  // あと，for(int j=0; j<n; j++){ ← 「a[i][j+1]」までアクセスしたいから「j<n」までやっちゃうとダメ
  // 「j<n-1」にすればOK
  for(int i=0; i<m; i++){
    for(int j=0; j<n-1; j++){
      rela[(a[i][j])][(a[i][j+1])] = 1;
      rela[(a[i][j+1])][(a[i][j])] = 1;
    }
  }
  // for(int i=0; i<m; i++){
  //   for(int j=0; j<n; j++){
  //     rela[(a[i][j])][(a[i+1][j+1])] = 1;
  //     rela[(a[i+1][j+1])][(a[i][j])] = 1;
  //   }
  // }

  int cnt=0;
  // 出力
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(rela[i][j] == 0){
        cnt++;
      }
    }
  }
  cnt = cnt/2;
  cout << cnt;

}
