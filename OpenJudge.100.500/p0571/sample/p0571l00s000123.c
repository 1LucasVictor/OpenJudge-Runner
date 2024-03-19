#include <stdio.h>
int main(void){
  int a, n, b;
  scanf("%d",&a);
  scanf("%d",&n);
  scanf("%d",&b);
  if(a*n > b){
    printf("%d",b);
  }
  else{
    printf("%d", a*n);
  }
  return 0;
}