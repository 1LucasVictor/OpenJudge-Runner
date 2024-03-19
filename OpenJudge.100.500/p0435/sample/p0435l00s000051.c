#include <stdio.h>

int main(){
  int n;
  long long d;
  scanf("%d%lld",&n,&d);
  int ans = 0,i=0;
  for(i;i<n;++i){
    long long x,y;
    scanf("%lld%lld",&x,&y);
    if(x*x+y*y<=d*d)ans++;
  }
  printf("%d\n",ans);
  return 0;
}
