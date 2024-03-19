#include<stdio.h>
int main(void){
  int a,b,sum,subt;
  scanf("%d %d",&a,&b);
  if(b%a==0){
    sum=a+b;
    printf("%d",sum);
  }
  else{
    subt=b-a;
    printf("%d",subt);
  }
  return 0;
}