#include<stdio.h>

int main(){

   int n;
   int a;
   int max = -1000000;
   int min = 1000000;
   long long int sum = 0;
   int i;

   scanf("%d", &n);

   for(i=0;i<n;i++){
      scanf("%d", &a);
      if(max<a) max = a;
      if(min>a) min = a;
      sum += a;
   }

   printf("%d %d %lld\n", min, max, sum);
   return 0;
}