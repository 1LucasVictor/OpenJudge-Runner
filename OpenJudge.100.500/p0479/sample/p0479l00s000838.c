#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
  int N,i;
  
  scanf("%d",&N);
  
  int A[200001]={},B[200001]={};
  
  for(i=2;i<=N;i++)
  {
    scanf("%d",&A[i]);
    B[A[i]]++;
  }
    
  for(i=1;i<=N;i++)
  {
    printf("%d\n",B[i]);
  }
  return 0;
}