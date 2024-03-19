#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int n,m,k,i,j,time,limit,count=0;
  long long int temp,*a,*b;
  
  scanf("%d",&n);
  scanf("%d",&m);
  scanf("%d",&k);
  
  a=(long long int)malloc(sizeof(long long int)*n+1);
  a[0]=0;
  for(i=1;i<=n;i++)
  {
    scanf("%lld",&temp);
    a[i]=temp+a[i-1];
  }
  
   b=(long long int)malloc(sizeof(long long int)*m+1);
  b[0]=0;
  for(i=1;i<=m;i++)
  {
    scanf("%lld",&temp);
    b[i]=b[i-1]+temp;
  }
  

  limit=m;
  for(i=0;i<=n;i++)
  {
    if(k<a[i])break;
    j=limit;
    while(b[j]>k-a[i])
    {
      j--;
    }
    limit=j;
    if(count<i+j)count=i+j;
  }
  
  printf("%d",count);
  
  free(a);
  free(b);
  
  return 0;
}
  