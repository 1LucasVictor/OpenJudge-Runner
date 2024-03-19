#include<stdio.h>

int main(){
   int x;
   scanf("%d", &x);
   int a = x/500;
   int b = (x%500)/5;

   printf("%d", a*1000 + b*5);

   return 0;
}
