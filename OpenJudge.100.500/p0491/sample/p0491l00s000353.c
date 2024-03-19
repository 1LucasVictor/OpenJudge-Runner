#include <stdio.h>

int main(){
long long int n,k;
  long long int ans;

  scanf("%d%d",&n,&k);
  ans=n%k;
  if (ans > k-ans) ans=k-ans;
  printf("%d",ans);
  return 0;

}
