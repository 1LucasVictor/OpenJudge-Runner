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
  
  for(i=1;i<n;i++)a[i]=a[i-1]+a[i];
	for(j=1;j<m;j++) b[j]=b[j-1]+b[j];
  

  limit=m-1;
  for(i=0;i<n;i++)
  {
    if(a[i]>k)break;
    for(j=limit;b[j]>k-a[i];j--)
    {
      ;
    }
    limit=j;
    if(count<i+j+2)count=i+j+2;
  }
  
  printf("%d",count);
  
  return 0;
}
  