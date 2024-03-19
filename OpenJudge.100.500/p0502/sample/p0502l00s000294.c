#include<stdio.h>
#include<stdlib.h>
int main()
{
  int N,A[100],i,num,num0;
  scanf("%d",&N);
  num0=0;
  num=0;
  for(i=0;i<N;i++)
  {
    scanf("%d",&A[i]);
    if(A[i]%2==0)
    {
      num0=num0+1;
      
      if(A[i]%3==0||A[i]%5==0)
      {
        num=num+1; 
      }
     }
   }
  if(num0==num)
  {
   printf("APPROVED");
    exit(0);
  }
   printf("DENIED");
}