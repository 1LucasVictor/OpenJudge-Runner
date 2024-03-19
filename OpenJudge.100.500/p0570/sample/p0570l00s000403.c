//|a-k|==|b-k|か判断
//(a+b)/2で偶数、奇数で
//統一されていれば解答できる

#include<stdio.h>

int main(){
  long a,b,k;
  scanf("%d %d",&a,&b);

  if(a%2==b%2){
    k=(a+b)/2;
    printf("%d",k);
  }else{
    printf("IMPOSSIBLE");
  }


  return 0;
}