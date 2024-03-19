#include<stdio.h>

int main(void){
   int n, m;           // input,  1<= n,m <= 100
   int A[100][100];    // input, A matrix
   int B[100];         // input, B vector
   int i, j;           // loop index
   int ans[100]={0};

   scanf("%d %d", &n, &m);
   for(i=0;i<n;i++){
      for(j=0;j<m;j++){
         scanf("%d", &A[i][j]);
      }
   }

   for(j=0;j<m;j++) scanf("%d", &B[j]);

   for(i=0;i<n;i++){
      for(j=0;j<m;j++){
         ans[i]+=A[i][j]*B[j];
      }
      printf("%d\n", ans[i]);
   }

   return 0;
}