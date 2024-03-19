#include<stdio.h>

int main(){

   int S;         // input, [s]
   int h, m, s;   // output, [hour, min, sec]

   scanf("%d", &S);
   
   h = S/3600;
   S = S%3600;
   m = S/60;
   s = S%60;

   printf("%d:%d:%d\n", h, m, s);
   return 0;

}