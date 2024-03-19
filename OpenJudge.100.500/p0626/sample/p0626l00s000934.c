#include <stdio.h>
#include <math.h>
int main(void){
  int d,n,s;
  scanf("%d%d",&d,&n);
  s=(n-(n-1)/99)*pow(100,d);
  printf("%d",s);
  return 0;
}