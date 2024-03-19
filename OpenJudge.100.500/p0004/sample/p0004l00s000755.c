#include<stdio.h>
int main(void){
   long a, b, r, A, B;
   while(scanf("%ld %ld", &a, &b) != EOF){
      A = a;
      B = b;
      if(b > a){
         a = B;
         b = A;
      }
      r = a % b;
      while(r != 0){
         a = b;
         b = r;
         r = a % b;
      }
      printf("%ld %ld\n", b, A * B / b);
   }
   return 0;
}