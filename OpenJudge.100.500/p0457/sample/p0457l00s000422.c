#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
#define kLENGTH 200000
 
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
  while(K>=0)
  {
    if(cA < N && cB < M)
    {
    if(A[cA] >= B[cB])
    {
      K -= B[cB];
      cB++;
      if(K>=0)
      {
        sum++;
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
    }
    }
    else if(cA >= N)
    {
      K -= B[cB];
      cB++;
      if(cB >= M)
      {
        break;
      }
      if(K>=0)
      {
        sum++;
      }
    }
    else
    {
      K -= A[cA];
      cA++;
      if(cA>=N)
      {
        break;
      }
      if(K>=0)
      {
        sum++;
      }
    }
  }
  printf("%d\n",sum);
  return 0;
}