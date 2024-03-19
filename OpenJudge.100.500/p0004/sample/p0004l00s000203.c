#include<stdio.h>
int main(void){
  long a,b,tmp,gdc,lcm,alpha,beta;
  int k;
  while(scanf("%ld %ld",&a,&b)!=EOF){
    if(a>b){ //?????¶??????a<=b?????¶????????????
      tmp=a;
      a=b;
      b=tmp;
    }
    for(k=1;k<=b/2+1;k++){
      if(a%k==0&&b%k==0){
        gdc=k;
      }
    }
    alpha = a/gdc;
    beta = b/gdc;
    lcm = gdc * alpha * beta;
    printf("%ld %ld\n",gdc,lcm);
  }
  return 0;
}