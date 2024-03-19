#include<stdio.h>
int main (void)
{
  int i,n=0,a,min=0,max=0;
  long long sum=0;
  scanf("%d",&n);
    a=0;    
    scanf("%d",&a);
    min=a;
    max=a;
    sum+=a;
  for(i=0;i<(n-1);i++){
    a=0;    
    scanf("%d",&a);
    if(a<min)min=a;
    if(a>max)max=a;
    sum+=a;
  }
  printf("%d %d %lld\n",min,max,sum);
  return 0;
}