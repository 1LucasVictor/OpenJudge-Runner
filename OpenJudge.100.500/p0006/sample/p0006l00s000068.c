#include<stdio.h>
int main(void){
   int n, i, p;
   double m;
   m = 100;
   scanf("%d", &n);
   for(i = 0; i < n; i++){
      m = m + m * 0.05;
      p = m;
      if(m > p){
         p++;
         m = p;
      }
   }
   printf("%d\n", p * 1000);
   return 0;
}