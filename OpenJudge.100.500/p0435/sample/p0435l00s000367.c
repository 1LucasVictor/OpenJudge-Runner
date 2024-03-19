#include<stdio.h>
int main (void){
  long long int n,d,x[20000],y[20000];
  int ans,i;
  ans=0;
  scanf("%lld %lld",&n,&d);
  
  for(i=0;i<n;i++)
  {
    scanf("%lld %lld",&x[i],&y[i]);
  }
  for(i=0;i<n;i++)
  {
    if(x[i]*x[i]+y[i]*y[i]<=d*d){ans++;}
  }
  printf("%d\n",ans);
  
  return 0;
}