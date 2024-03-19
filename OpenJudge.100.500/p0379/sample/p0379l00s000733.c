#include <stdio.h>
int main()
{
  int n,m,a[100][100],b[1000],i,j,sum=0;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
  for(j=0;j<m;j++)
  scanf("%d",&a[i][j]);
  for(i=0;i<m;i++)
  scanf("%d",&b[i]);

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      sum+=b[j]*a[i][j];
    }
    printf("%d\n",sum);
    sum=0;
  }
  return 0;
}