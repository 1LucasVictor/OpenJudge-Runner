#include <stdio.h>

int main(void){
  int d,n,data=100,dataCMP=1;
  scanf("%d%d",&d,&n);

  //printf("He\n" );
  for(int i=0;i != d;i++){
    dataCMP *= data;
  }
  dataCMP *= n;

  printf("%d\n",dataCMP);

  return 0;
}
