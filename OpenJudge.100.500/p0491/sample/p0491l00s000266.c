#include<stdio.h>

int main(){
 long long int n,k;
  int n1,n2,a;
  scanf("%lld %lld",&n,&k);
  a=n/k;
  n=n-k*a;
  n1=n;
  n=n-k;
  n2=n;
  if(n1<=(n2-(2*n2))){
    printf("%lld",n1);
  }else{
    printf("%lld",n2-(2*n2));
  }
}