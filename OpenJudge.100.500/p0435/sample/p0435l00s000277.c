#include<stdio.h>

int main()
{
  long long n,d,s;
  long long x[200001],y[200001];
  int i;
  int ans=0;
  scanf("%lld%lld",&n,&d);
  for(i=0;i<n;i++){
    scanf("%lld%lld",&x[i],&y[i]);
    s=x[i]*x[i]+y[i]*y[i];
    if(s<=d*d) ans++;
  }
  printf("%d",ans);
  return 0;
}
