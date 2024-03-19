#include <stdio.h>

int main(){
  int n,cnt=1,ans=1;
  int n0=1;
  int n1=1;

  scanf("%d",&n);
  while(cnt!=n){
    ans=n0+n1;
    n0=n1;
    n1=ans;
    cnt++;
  }

  printf("%d\n",ans);

  return 0;
}