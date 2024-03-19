#include<stdio.h>
int main(void)
{
  int n=0;
  scanf("%d",&n);
  int A[n];
  int i=0;
  for(i=0;i<n;i++)
  {
    scanf("%d",&A[i]);
  }/*ここまでおっけい*/
  int k,j=0;
  int judge=0;
  for(k=0;k<n-1;k++)
  {
    for(j=k+1;j<n;j++)
    {
	  if(A[k]==A[j])
      {
        judge++;
      }
    }
  }
  if(judge==0)
  {
    printf("YES");
  }
  if(judge>0)
  {
    printf("NO");
  }
  return 0;
}
  