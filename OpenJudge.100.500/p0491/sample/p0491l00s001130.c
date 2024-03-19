#include<stdio.h>
#include<stdlib.h>


int main(){
  long long int n,k,hoge;
  scanf("%lld %lld",&n,&k);
  hoge = n % k;
  if(abs(hoge -k) < hoge){
    printf("%lld",abs(hoge -k));
    return 0;
  }
  printf("%lld",hoge);
}