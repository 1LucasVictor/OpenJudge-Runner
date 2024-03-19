#include<stdio.h>
int main(void){
  int a,b;
  int x=0;
  scanf("%d %d",&a,&b);
  if(b%a==0)
    printf("%d",a+b);
  else{
    printf("%d",a-b);
  }
  return (0);
}
