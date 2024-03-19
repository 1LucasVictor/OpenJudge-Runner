#include<stdio.h>
#include<stdlib.h>

int main()
{ 
  int n,m,k;
  long long a[200001],b[200001];
  int i,j;
  int ans=0,test;
  int time=0;
  long long c[200001],d[200001];
  int s,t;
  scanf("%d%d%d",&n,&m,&k);
  for(i=0;i<n;i++){
    scanf("%lld",&a[i]);
  }
  for(i=0;i<m;i++){
    scanf("%lld",&b[i]);
  }
  c[0]=a[0];
  for(i=1;i<n;i++){
    s=c[i-1];
    c[i]=s+a[i];
    if(c[i]>k) c[i]=k;
  }
  d[0]=b[0];
  for(i=1;i<m;i++){
    s=d[i-1];
    d[i]=s+b[i];
    if(d[i]>k) d[i]=k;
  }
  t=m-1;
  for(i=0;i<n;i++){
    if(c[i]>k) continue;
    for(j=t;j>=0;j--){
      if(c[i]+d[j]<=k){
        t=j;
        test=i+j+2;
        if(test>ans) ans=test;
        break;
      }
    }
  }
  printf("%d",ans);
  return 0;
}
