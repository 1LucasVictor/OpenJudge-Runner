#include <stdio.h>
#define ll long long

int main(){
  ll h,n,a,i;
  scanf("%lld%lld",&h,&n);
  for(i=0;i<n;i++){
    scanf("%lld",&a);
    h-=a;
  }
  if(h<=0) printf("Yes");
  else printf("No");
  return 0;
}