#include<stdio.h>
int main(void){
  int D,N,i,t=1;
  scanf("%d %d",&D,&N);
  for(i=0;i<D;i++){
    t*=100;
  }
  printf("%d\n",t*N);
  return 0;
}