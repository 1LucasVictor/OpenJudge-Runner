#include  <stdio.h>

int main () {
  long long int A;
  long long int B;
  long long int C;
  long long int K,amari,sum;
  scanf("%lld %lld %lld %lld",&A,&B,&C,&K);
  if(A>=K){
    printf("%lld",K);
    return 0;
  }else{
    amari = K-A;
    sum = A;
    if(B>=amari){
	  printf("%lld",sum);
      return 0;
    }else{
	  amari = amari-B;
      printf("%lld",sum-amari);
    }
  }
  return 0;
}
