#include<stdio.h>

int main(){
  long long  n,k,tmp;

  scanf("%lld %lld",&n,&k);

  tmp = n%k;
  if(tmp < k-tmp){
    printf("%lld\n",tmp);
  }else{
    printf("%lld\n",(k-tmp));
  }


  return 0;
}