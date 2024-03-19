#include<stdio.h>
int main(void){
  int a,b,count;
  count = 0;
  scanf("%d%d",&a,&b);
  while(a>0){
    a-=b;
    count++;
  }
  printf("%d",count);
  return 0;
}