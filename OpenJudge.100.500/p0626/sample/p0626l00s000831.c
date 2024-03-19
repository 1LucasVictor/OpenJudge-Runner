#include <stdio.h>

int main(){
  int D,N;
  int t=1;
  scanf("%d%d",&D,&N);
  for(int i=0;i<D;i++)t*=100;
  if(N==100)N++;
  printf("%d\n",t*N);

  return 0;
}