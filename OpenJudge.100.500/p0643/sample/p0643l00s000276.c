#include <stdio.h>
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  ((a*b)%2==1)?puts("Odd"):puts("Even");
  return 0;
}