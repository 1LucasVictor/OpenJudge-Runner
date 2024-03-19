#include <stdio.h>

int main(){
  int A,B,K,num=0,x=1;
  scanf("%d %d %d",&A,&B,&K);
  while(num < K){
    if(A%x==0 && B%x==0){
      num++;
    }
    x++;
  }
  printf("%d",x-1);
  return 0;
}
