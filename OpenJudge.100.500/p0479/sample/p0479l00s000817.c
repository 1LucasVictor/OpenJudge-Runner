#include <stdio.h>
int main(void)
{
  int i,j,n,tmp;
  double a,b;
  int number[200000];
  int count;
  scanf("%d",&n);
  for(i=0;i<n-1;i++)
  {
      scanf("%d",&number[i]);
  }

  for(i=0;i<n;i++)
  {
    count = 0;
    for(j=0;j<n-1;j++)
    {
      if(number[j] == i+1)
      {
        count++;
      }
    }
    printf("%d\n",count);
  }

  return 0;
}