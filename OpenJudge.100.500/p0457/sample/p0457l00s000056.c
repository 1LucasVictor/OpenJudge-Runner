#include <stdio.h>
int main()
{
    int a[200001],b[200001];
     int n,m,i,k,j,sum=0,c=0;
    scanf("%d%d%d",&n,&m,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
  for(i=0;i<n;i++)
  {
      sum+=a[i];
      if(sum<=k)
        c++;
        else
            sum-=a[i];
  }
  for(i=0;i<m;i++)
  {
      sum+=b[i];
      if(sum<=k)
        c++;
    else
        break;
  }
  printf("%d\n",c);
}
