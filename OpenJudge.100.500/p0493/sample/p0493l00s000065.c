#include<stdio.h>
 int main(void)
 {
   int X,i,j,k;
   scanf("%d",&X);
   i=X/500;
   j=(X%500)/5;
   k=i*1000+j*5;
   printf("%d\n",k);
   return 0;
 }