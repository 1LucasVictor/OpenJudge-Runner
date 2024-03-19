#include <stdlib.h>
#include <stdio.h>
int main(void){
  int x;
  int uresisa=0;
 
  scanf("%d",&x);
  uresisa=x/500*1000;
  x=x-x/500*500;
  uresisa=uresisa+x/5*5;
  printf("%d",uresisa);
  return 0;
}
