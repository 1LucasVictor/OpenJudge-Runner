#include<stdio.h>
long long int mini(long long int a,long long int b){
  if(a>b) return b;
  return a;
}
int main(void){
  long long int l,r,i,j,ans=1e9;
  scanf("%lld %lld",&l,&r);
  if(r-l < 2019){
    for(i=l;i<r;i++){
      for(j=i+1;j<=r;j++){
        ans = mini(ans,(i*j)%2019);
      }
    }
  }
  else ans = 0;
  printf("%lld\n",ans);
  return 0;
}