#include <stdio.h>
int main(void){
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d",(b%a==0)?(a+b):(b-a));
}