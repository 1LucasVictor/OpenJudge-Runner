#include<stdio.h>
int main(void){

   int n;
   
   scanf("%d",&n);
   
   n=n%10;
   
   if     (n==3)         printf("bon");
   else if(n<2)          printf("pon");
   else if(n==6 || n==8) printf("pon");
   else                  printf("hon");
   
   return 0;
   }