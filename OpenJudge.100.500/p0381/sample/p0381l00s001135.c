#include<stdio.h>

int main()
{
   int i, j, k;
   int n, x;
   int a = 0;

   do {
   scanf("%d %d\n", &n, &x);

   for(i = 1; i <= n; i++){
      for(j = 1; j <= n; j++){
         for(k =1; k <= n; k++){
            if(i+j+k==x && i!=j && j!=k && i!=k){
               a = a + 1;
            }
         }
      }
   }

   printf("%d\n", a/6);
   }while(n==0 && x==0);

   return 0;
}
   

