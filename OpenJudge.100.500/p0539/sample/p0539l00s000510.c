#include<stdio.h>
int main(void){

  //９X９までの計算結果を先に用意する
  int ans[10][10];
  for(int i = 1; i <= 9; i++){
    for(int j = 1; j <= 9; j++){
      ans[i][j] = i*j;
    }
  }
  
  //変数を受け取る
  int N;
  scanf("%d", &N);
  
  //受け取った変数と一致するものがあるか調べる
  char flg = 0;
  for(int i = 1; i <= 9; i++){
    for(int j = 1; j <= 9; j++){
      if(N == ans[i][j]){
      	flg = 1;
        break;
      }
    }
  }
  
  //結果を出力
  if(flg){
  	printf("Yes\n");
  }else{
  	printf("No\n");
  }
  
  return 0;
}
