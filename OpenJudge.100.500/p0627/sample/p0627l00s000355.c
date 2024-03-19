#include <stdio.h>

int main(){
  int a,b,i,max=0;
  scanf("%d %d",&a,&b);
  i = a+b;
  if(max <i) max=i;
  i = a-b;
  if(max <i) max=i;
  i = a*b;
  if(max <i) max=i;
  
  printf("%d",max);
  
  return 0;
}