#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

  long long int a,b,c,k,i,n;

  scanf("%lld%lld%lld%lld" ,&a,&b,&c,&k);

  if(a+b>=k) n=a;

  else if(a+b<k && a+b+c>=k){
    n=a;
    for(i=0;i<k-a-b;i++){
      n=n-1;
    }
  }
  printf("%lld", n);

  return 0;
}
