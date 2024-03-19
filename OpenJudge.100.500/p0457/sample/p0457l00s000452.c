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
    //両方ともに本が残っている
    if(cA < N && cB < M)
    {
      //一番上の本で読む時間　机A>机B
      if(A[cA] > B[cB])
      {//Bから読む
      	K -= B[cB];
        cB++;
      }
      //一番上の本で読む時間　机A<机B
      else if(A[cA] < B[cB])
      {//Aから読む
      	K -= A[cA];
        cA++;
      }
      //同じとき 次の本をみて、短いほうを選ぶ
      else
      {
       for(int j = 1;;j++)
       {
         if(j >= N -cA && j >=M -cB )
         {
           break;
         }
         //Aにはなく、Bにある
         else if(j >= N -cA && j < M -cB)
         {
              K -= B[cB];
              cB++;
             break;
         }
         //Bにはなく、Aにある
       	 else if(j < N -cA && j >= M -cB)
         {
              K -= A[cA];
              cA++;
              break;
         }
         //両方ある
         else
         {
           if(A[cA+j] > B[cB+j])
           {//Bから読む
             K -= B[cB];
             cB++;
           }
           else if(A[cA+j] < B[cB+j])
           {//Aから読む
             K -= A[cA];
             cA++;
           }
         }
       }
      }
      if(K>=0)
      {
         sum++;
      }
    }
      //Aにない
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