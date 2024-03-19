#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef long long ll;

int main(){
  ll a,b,c;
  ll sum = 0;
  ll k,t;

  scanf("%lld %lld %lld %lld", &a, &b, &c, &k);

  if(a >= k){
    printf("%lld\n", a);
  }

  else{
    k = k - a;

    if(b >= k){
      printf("%lld\n", a);
    }

    else{
      k = k - b;

      printf("%lld\n", a - k);
    }
  }

  return 0;
}
