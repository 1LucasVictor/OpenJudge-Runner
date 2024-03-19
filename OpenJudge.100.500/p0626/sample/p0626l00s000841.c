#include <math.h>
#include <stdio.h>

int main(){
  int D,N;
  scanf("%d %d",&D,&N);
  if(N!=100){
    printf("%d", (int)pow(100,D)*N);
  }else{
    printf("%d",(int)pow(100,D)*N+1);
  }
  return 0;
}

