#include <stdio.h>

int main(){
  int D,N;
  long t=1;
  scanf("%d%d",&D,&N);

  for(int i=0;i<D;i++){
    t*=100;
  }
  printf("%d\n",t*N);

  return 0;
}