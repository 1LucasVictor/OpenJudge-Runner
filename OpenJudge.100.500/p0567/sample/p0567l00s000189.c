#include<stdio.h>
int main(void){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  a=a-b;
  c=c-a;
  if(c<=0)
    printf("0");
  else if(c>0)
    printf("%d",c);
  return 0;
}