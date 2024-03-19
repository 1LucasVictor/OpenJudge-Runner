#include<stdio.h>

int main(void)
{
  char nmk[256];
  int n,m,k,i,j,time,limit,count=0,a[20000],b[20000];
  
  fgets(nmk,sizeof(nmk),stdin);
  sscanf(nmk,"%d %d %d",&n,&m,&k);
  
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<m;i++)
  {
    scanf("%d",&b[i]);
  }
  
  for(i=1;i<n;i++)
  {
    a[i]=a[i-1]+a[i];
    b[i]=b[i-1]+b[i];
  }
  
  for(i=0;i<n;i++)
  {
    for(j=0;time<=k;j++)
    {
      time=a[i];
      time+=b[j];
    }
    if(count<i+j+1)count=i+j+1;
  }
  
  printf("%d",count);
  
  return 0;
}
  