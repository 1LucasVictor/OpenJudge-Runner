#include<stdio.h>
int main(){
  int a,b; //変数宣言
  float t;
  int sum=0;
  int work=0;
  scanf("%d%d%f",&a,&b,&t); //入力
  
  if(a>t+0.5){
    goto a;
  }
  
  for(int i=1;i<t;i++){
    if((float)i*(float)a <= t+0.5){
      sum+=b;
    }
  }
  a:
  
  printf("%d\n",sum);
  return 0;
}
