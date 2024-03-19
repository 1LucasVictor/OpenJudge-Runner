#include<stdio.h>

int main(){
   int n;
   scanf("%d", &n);
   int a[n];
   int judge = 0;
   for(int i=0; i<n; i++){
      scanf("%d", &a[i]);
      if(a[i] % 2 == 0){
         if(a[i] % 3 != 0 && a[i] %5 != 0){
            judge = 1;
         }
      }
   }

   if(judge == 0){
      printf("APPROVED");
   } else {
      printf("DENIED");
   }

   return 0;
}
