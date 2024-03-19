#include<stdio.h>

int main(void)
{
int a,sum;
scanf("%d", &a);
  
if(1<=a && a<=10){
 sum=a+(a*a)+(a*a*a);
  printf("%d\n", sum);
}
  return 0;
}