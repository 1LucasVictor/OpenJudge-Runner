#include<stdio.h>
int main(void){
  long long a,b,c,k,ans=0;
  scanf("%lld %lld %lld %lld",&a,&b,&c,&k);
  if(a>=k){
    ans=k;
  }else{
    ans+=a;
    if(b>=k-a){
      ans+=0;
    }else{
      ans-=k-a-b;
    }
  }
  printf("%lld\n",ans);
  return 0;
}