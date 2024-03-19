#include <stdio.h>

int main(){
  
  int a,b,c;
  
  scanf("%d",&a);
  scanf("%d",&b);
  c = a*b;
  
  if (c%2)
    printf("Odd");
  else
    printf("Even");
  
  return 0;
}
