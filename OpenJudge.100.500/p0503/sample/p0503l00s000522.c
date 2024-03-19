#include<stdio.h>
#include<string.h>
 
int main()
{
  long N, same;
  long long A[20002];
  
  scanf("%ld", &N);
  
  for(int i=0;i<N;i++)
  {
      scanf("%ld", &A[i]);
  }
  
  same=0;
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N;j++)
    {
      if (i==j) continue;
      if (A[i] == A[j]) same++;
    }
  }
  
  if (same==0)
  {
    printf("YES");
  }
           else
           {
             printf("NO");
           }
           
  return 0;
}