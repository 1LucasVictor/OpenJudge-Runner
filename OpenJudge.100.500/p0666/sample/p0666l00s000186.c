#include<stdio.h>
#include<stdlib.h>

typedef long long ll;
int main(void)
{
  ll x,a,b;
  scanf("%lld %lld %lld",&x,&a,&b);
  if(a>=b){
    puts("delicious");
  }else{
    if(b-a<=x){
      puts("safe");
    }else{
      puts("dangerous");
    }
  }
  return 0;
}
