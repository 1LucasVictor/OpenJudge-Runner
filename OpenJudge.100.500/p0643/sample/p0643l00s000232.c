#include "stdio.h"
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  int c;
  c=a*b;
  if (c%2==0) {
    printf("Even\n");
  }else{
  printf("Odd\n");
}
return 0;
}
