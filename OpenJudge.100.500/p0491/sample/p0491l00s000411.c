#include<stdio.h>
#include<stdlib.h>

int main(){
  long long int n,k, hoge=0;
  scanf("%lld %lld",&n,&k);
  hoge = n % k;
  if(llabs(hoge -k) < hoge) hoge = llabs(hoge -k);
  printf("%lld",hoge);
}
