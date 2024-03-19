#include <stdio.h>

int main()
{
  int n,m,k;
  scanf("%d%d%d", &n, &m, &k);
  int i,j;
  int a,b;
  long long suma[200000];
  long long sumb[200000];
  for(i=0;i<n;i++){
    scanf("%d",&a);
    if(i==0) suma[i]=a;
    else suma[i]=suma[i-1]+a;
  }
  for(i=0;i<m;i++){
    scanf("%d",&b);
    if(i==0) sumb[i]=b;
    else sumb[i]=sumb[i-1]+b;
  }
  int ans=0;
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(suma[i]+sumb[j]<=k && i+j+2>ans) ans=i+j+2;
      if(suma[i]+sumb[j]>k) break;
    }
  }
  printf("%d\n",ans);
  return 0;
}