#include <stdio.h>
#include <string.h>
 
int main(void){
  int a,b,t;
  int da = 0;
  
  scanf("%d %d %d",&a,&b,&t);
  da=t/a;
  da=da*b;

  printf("%d",da);
 
  return 0;
}
