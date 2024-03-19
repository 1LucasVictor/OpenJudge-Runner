#include<stdio.h>

int main(){
   int n, x;
   int N, i, j, k;

   while(1){
      scanf("%d %d", &n, &x);
      if(n==0 && x==0){
         break;
      }
      N = 0;

      for(i=1; i<n-1; i++){
         for(j=i+1; j<n; j++){
            for(k=j+1; k<n+1; k++){
               if(i+j+k==x)
                  N = N+1;
            }
         }
      }
      printf("%d\n", N);
   }
   return 0;
}