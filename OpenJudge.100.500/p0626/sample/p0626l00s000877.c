#include <stdio.h>

int main(int argc, char *argv[]){
   int d, n;
   long long int x = 1;
   int i;

   scanf("%d %d", &d, &n);

   if(d == 0){
     x = 1;
   }else{
     for(i=1; i<=d; i++){
       x = x * 100;
     }
   }

   if(n == 100){
     x = x * n + x;
   }else{
     x = x * n;
   }

   printf("%lld\n",x);

   return 0;
}
