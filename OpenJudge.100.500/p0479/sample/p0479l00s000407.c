#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int *A;
    scanf("%d\n", &N);
    
    A = (int *)malloc(N* sizeof(int));
   
   for(int k=0; k<N; k++)
   {
     A[k] = 0;
   }
  
   int i;
   while(scanf("%d",&i)==1)
   {
      A[i-1]++;
    }

   for(int k=0; k<N; k++)
   {
     printf("%d\n",A[k]);
   }
   
   free(A);
  
   return 0;
}