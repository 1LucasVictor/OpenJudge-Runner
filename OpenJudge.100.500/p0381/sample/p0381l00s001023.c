#include<stdio.h>
 
int main()
{
   int n, x, i, j, k;
   int A = 0;
 
   while(1) {
      scanf("%d %d\n", &n, &x);
      if(n==0 && x==0)
         break;
      for(i=1; i<=n; i++) {
         for(j=i+1; j<=n; j++) {
            for(k=j+1; k<=n; k++) {
               if(i+j+k == x) {
                  A++;
               }
            }
         }
      }
      printf("%d\n", A);
   }
   return 0;
}
 
                      