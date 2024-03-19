#include<stdio.h>

int main(void)
{
   int a,b,t;
   scanf("%d %d %d\n",&a,&b,&t);
   int sum=(t+0.5)/a;
   sum = sum*b;
   printf("%d\n",sum);
}           