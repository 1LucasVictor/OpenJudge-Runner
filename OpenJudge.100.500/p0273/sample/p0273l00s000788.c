#include <stdio.h>

int main(void){

  //aは計算を行うための変数
  int a, i;

  //bはcの値が変わる前の値を記憶する変数
  int b = 0;

  //cはaのb+cを記憶しておく変数
  int c = 1;

  //nは入力値
  int n;
  
  scanf("%d",&n); 
  for(i=0;i<=n;i++){ 
    a = b+c;
    b = c;
    c = a;
  }
  printf("%d\n", b);
  
  return 0;
}