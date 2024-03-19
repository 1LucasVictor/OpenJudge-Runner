#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  int n,m,k;
  long int a[200001]={0};
  long int b[200001]={0};
  int maxa=0,maxb=0,ans=0;
  int max,min;
  int i,j;
  scanf("%d %d %d",&n,&m,&k);
  for(i=1;i<=n;i++)
  {
    scanf("%ld",&a[i]);
    a[i]=a[i]+a[i-1];
    if(a[i]<=k) maxa=i;
  }
  for(i=1;i<=m;i++)
  {
    scanf("%ld",&b[i]);
    b[i]=b[i]+b[i-1];
    if(b[i]<=k) maxb=i;
  }
  max=maxa+maxb;
  if(maxa>maxb) min=maxa;
  else min=maxb;
  for(i=max;i>=min;i--)
  {
    for(j=maxa;i-j<=maxb;j--)
    {
      if(a[j]+b[i-j]<=k)
      {
        ans=i;
        break;
      }
    }
    if(ans>0) break;
  }

  printf("%d\n",ans);

  return 0;
}