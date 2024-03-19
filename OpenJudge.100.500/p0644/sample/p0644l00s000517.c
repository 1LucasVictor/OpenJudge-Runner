#include <stdio.h>
int main () {
  int a,b;
  scanf("%d",&a);
  b=0;
  if (a%10==1){
    b=b+1;
  }
  if ((a/10)%10==1){ 
    b=b+1;
  }
  if (a/100==1){
    b=b+1;
  }
  printf("%d",b);
  return 0;
}
    