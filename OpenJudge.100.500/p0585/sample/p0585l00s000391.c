#include <stdio.h>
#include <sysexits.h>
#include <math.h>
int main(void){
  int a,b,T,sum;
  if(scanf("%d %d %d",&a,&b,&T)!=3){
exit(1);
}

  sum = (T/a)*b;
  printf("%d",sum);
  return 0;
}

