#include<stdio.h>
long min(long a,long b){
  if(a<b){
    return a;
  }else{
    return b;
    
  }
}
int main(){
  long A,B,C,K, Max=0;
  int i,j,k;
  scanf("%lu%lu%lu%lu",&A,&B,&C,&K);
  for(i=A;i>=0;i--){
    for(j=min(B,K-A);j>=0;j--){
      C=K-i-j;
      Max=(1*i+0*i-(1*C));
      break;
    }
    break;
  }
  //Max=min(A,K)*1+B*min(min(A,K),)
  printf("%lu",Max);
  return 0;
}