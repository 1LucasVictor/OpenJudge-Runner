#include<stdio.h>
int main(void)
{
    int a,b,c;
  int d;
  
 
    // スペース区切りの整数の入力
    scanf("%d %d %d",&a,&b,&c);
 
    // 出力
  if(a-b<c){
    d = c -(a-b);
   
  }else{
    d = 0;
  }
   printf("%d",d);
    return 0;
}