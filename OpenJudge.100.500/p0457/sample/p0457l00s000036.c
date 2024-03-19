#include <stdio.h>

int main(void){
  long long n,m,k,a[200005],b[200005],max=0;
  scanf("%lld%lld%lld",&n,&m,&k);
  a[0]=b[0]=0;
  for(int i=1;i<=n;i++){
    scanf("%lld",&a[i]);
    a[i]+=a[i-1];
  }
  for(int i=1;i<=m;i++){
    scanf("%lld",&b[i]);
    b[i]+=b[i-1];
  }
  long long best=m;
  for(int i=1;i<=n;i++){
    for(int j=best;j>=1;j--){
      if(b[j]<=k-a[i]){
        if(i+j>max)  max=i+j;
        best=j;
        break;
      }
    }
  }
  printf("%lld",max);
  return 0;
}
