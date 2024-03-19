#include<stdio.h>

int main(){
 long int n,k;
  int n1,n2;
  scanf("%ld %ld",&n,&k);
  for(;n>0;){
    n=n-k;
  }
  n1=n;
  n=n+k;
  n2=n;
  if((n1-(2*n1))>=n2){
    printf("%ld",n2);
  }else{
    printf("%ld",n1-(2*n1));
  }
}