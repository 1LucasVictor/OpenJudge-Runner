#include<stdio.h>

int main(void)
{
  long long int n,m,k,a[200005]={0},b[200005]={0},i,sum=0,numa=0,numb=0;
  
  scanf("%lld%lld%lld",&n,&m,&k);
  
  for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
  
  for(i=0;i<m;i++)
    scanf("%lld",&b[i]);
  
  for(i=0;i<n+m;i++){
    if((a[numa]<b[numb]||numb>=m)&&numa<n&&sum+a[numa]<=k){
      sum+=a[numa];
      numa++;
    }else if((a[numa]>=b[numb]||numa>=n)&&numb<m&&sum+b[numb]<=k){
      sum+=b[numb];
      numb++;
    }
    if(sum+a[numa]>k&&sum+b[numb]>k)
      break;
  }
  
  printf("%lld\n", numa+numb);

  return 0;
  
}
