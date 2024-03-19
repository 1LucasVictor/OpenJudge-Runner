#include <stdio.h>
int main(void){
  int A,B,K,cnt;
  cnt=0;
  scanf("%d %d %d",&A,&B,&K);
  for(int i=1;i<=100;++i){
    if(A%i==0 && B%i==0){
      if(++cnt==K){
        printf("%d",i);
      }
    }
  }
}