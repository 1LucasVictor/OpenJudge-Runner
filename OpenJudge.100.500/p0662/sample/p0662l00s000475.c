#include<stdio.h>
int main(void){
  int a, b, c, d, i, count=0;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  for(i=0;i<=100;i++)
    if((a<=i && i<=b) && (c<=i && i<=d))
      count++;
  count = (count>0) ? count-1 : count; 
  printf("%d",count);
  return 0;
}
