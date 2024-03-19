#include<stdio.h>

#define N 10000

int main()
{
  int n,tmpmin,tmpmax,a[N];
  long long int i,sum=0;
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  tmpmin=a[0];
  tmpmax=a[0];
  sum=a[0];
  for(i=1;i<n;i++){
    sum+=a[i];
    
    if(tmpmax<a[i])
      tmpmax=a[i];
    if(tmpmin>a[i])
      tmpmin=a[i];
  }

  printf("%d %d %lld\n",tmpmin,tmpmax,sum);
  
  return 0;
}