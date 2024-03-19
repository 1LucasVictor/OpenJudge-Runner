#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int *A;
    scanf("%d\n", &N);
    
    A = (int *)malloc((N-1)* sizeof(int));
  
   int i=0;
   while(scanf("%d",&A[i])==1)
   {
      i++;
    }
  
   int sum;
   for(int k=1; k<=N; k++)
   {
     sum = 0;
     for(int j=0; j<(N-1); j++)
     {
       if(A[j]==k) sum ++;
     }
     printf("%d\n",sum);
   }
   
   return 0;
}