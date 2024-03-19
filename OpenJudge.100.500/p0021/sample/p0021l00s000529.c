#include<stdio.h>
#define rep2(i,n) rep3(i,0,n)
#define rep3(i,j,n) for((i)=(j) ; (i)<(n) ; (i)++)
#define pl(format,var) p(format "\n",var)
#define p(format,var) printf(format,var)
#define asizeof(array) (sizeof(array)/sizeof(array[0]))

/*
[履歴]
・できたんでsubmit

[メモ]
5000 * 100000 = 500000000 (5億)
→intで収まる範囲

1.全パターンを調べる
X X X の場合
o
o o
o o o
  o
  o o
    o
3+2+1=7
→nコの並びなら, n+(n-1)+…+1 = n(n+1)/2
  公式忘れてたけど、ガウスの逸話のおかげで助かった。
これならO(n^2)。
イケそうだが…別案も考えてみよか。

別案、思いつかないんで、とりあえずこれで。

*/

#define MAX_TERM 5000
#define MAX_VAL 100000
int data[MAX_TERM]; //各項の値を入れておく配列

int main(){
  char line[80]; //入力行
  int i,j,k; //カウンタ変数
  int n; //各データセットの項数
  int maxsum; //連続する項の和の最大値
  int cursum; //現在の項の和
  
  while(1){ //無限ループbegin
    //項数の入力を受け付ける
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &n);
    
    //項数が0なら終了する
    if(n==0)
      break;
    
    //項数だけ入力を受け付けて, 配列に格納
    rep2(i,n){
      fgets(line, sizeof(line), stdin);
      sscanf(line, "%d", &data[i]);
    }
    
    //最大値は, 最小値で初期化しておく
    //→最大値がこの値を下回ることはない
    maxsum = -1 * MAX_VAL;
    
    //最大値を計算する
    //↓のように走査して, 和を求めて, 最大値を比較していく
    // XXX(項の長さが1のとき, 和は3つ)
    // o
    //  o
    //   o
    //
    // XXX(項の長さが2のとき, 和は2つ)
    // oo
    //  oo
    //
    // XXX(項の長さが3のとき, 和は1つ)
    // ooo
    rep2(i,n){
      rep2(j,n-i){
        cursum = 0;
        rep3(k,j,j+i+1){
          cursum += data[k];
        }
        if(maxsum < cursum)
          maxsum = cursum;
      }
    }
    
    //最大値を出力
    pl("%d",maxsum);
  }//無限ループend
  return 0;
}