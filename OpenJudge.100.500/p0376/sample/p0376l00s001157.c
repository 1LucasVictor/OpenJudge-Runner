#include<stdio.h>

int main(){

   int n;      // input, n<=100
   int a[100];  // input, 0<= a[i] <1000
   int i;

   scanf("%d", &n);
   for(i=0;i<n;i++) scanf("%d", &a[i]);

   for(i=n-1;i>=0;i--){
      if(i==0) printf("%d\n", a[i]);
      else printf("%d ", a[i]);
   }

   return 0;
}