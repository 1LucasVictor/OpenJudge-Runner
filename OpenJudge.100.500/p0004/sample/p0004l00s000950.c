#include<stdio.h>
int main(void){
  long a,b,tmp,gdc,lcm,alpha;
  long k,l;
  while(scanf("%ld %ld",&a,&b)!=EOF){
    if(a>b){ //?????¶??????a<=b?????¶????????????
      tmp=a;
      a=b;
      b=tmp;
    }
    for(k=1;k<=b;k++){
      if(b%k==0){
        l=b/k;
        if(a%l==0){
          gdc=l;
          break;
        }
      }
    }
    alpha = a/gdc;
    lcm = alpha * b;
    printf("%ld %ld\n",gdc,lcm);
  }
  return 0;
}