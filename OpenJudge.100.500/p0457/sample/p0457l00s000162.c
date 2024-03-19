#include<stdio.h>
#include<stdlib.h>
 
int main()
{
  int N, M, K, sum;
  int cA, cB;
  int* A, *B;
  scanf("%d %d %d",&N, &M, &K);
  
  A= (int*)malloc(N * sizeof(int));  
  B= (int*)malloc(M * sizeof(int));
  
  //Aの読みとり
for(int i=0;i<N;i++)
{
  scanf("%d",&A[i]);
}
    //Bの読みとり
for(int i=0;i<M;i++)
{
  scanf("%d",&B[i]);
}
  
  sum = 0;
  cA =0;
  cB=0;
  while(K>0)
  {
    if(cA < N && cB < M)
    {
       for(int j = 0;j<N - cA && j<M- cB;j++)
       {
       	if(A[cA+j] >B[cB+j])
           {
              K -= B[cB];
              cB++;
             break;
           }
            else if(A[cA+j] < B[cB+j])
            {
              K -= A[cA];
              cA++;
              break;
            }
       }
      if(K>=0)
      {
         sum++;
      }
    }
    else if(cA >= N)
    {
      K -= B[cB];
      cB++;
      if(K>=0)
      {
        sum++;
      }
      if(cB >= M)
      {
        break;
      }
    }
    else
    {
      K -= A[cA];
      cA++;
      if(K>=0)
      {
        sum++;
      }
      if(cA>=N)
      {
        break;
      }
    }
  }
  printf("%d\n",sum);
  free(A);
  free(B);
  return 0;
}