#include<stdio.h>

int main(){
   int x;
   scanf("%d", &x);
   int x500yen = x/500;
   int x500fra = x%500;
   int x5yen = x500fra/5;
   int result = x500yen*1000 + x5yen*5;
   printf("%d\n", result);

   return 0;
}