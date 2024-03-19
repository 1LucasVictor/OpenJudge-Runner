#include<stdio.h>
#include<string.h>
 
int main()
{
  int N, same;
  int A[20002];
  
  scanf("%d", &N);
  
  for(int i=0;i<N;i++)
  {
      scanf("%d", &A[i]);
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