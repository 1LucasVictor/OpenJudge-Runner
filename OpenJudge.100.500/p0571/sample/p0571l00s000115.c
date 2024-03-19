#include<stdio.h>

int main(void){
  int a=0, b=0, n=0;
  
  scanf("%d %d %d", &n, &a, &b);
  if(n*a >= b)
    printf("%d", b);
  else
     printf("%d", n*a);
}
