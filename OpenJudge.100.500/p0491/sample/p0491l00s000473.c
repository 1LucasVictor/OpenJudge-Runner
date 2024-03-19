#include<stdio.h>

int main(){
  int N, K;
  int i;
  scanf("%d %d",&N,&K);
  for(i = 1; i < 1000000000000000000; i++){
    int y[i];
    y[0] = N;
    y[i] = N -i * K > 0 ? N -i* K : i*K -N;
    if(y[i] > y[i-1]) {printf("%d",y[i-1]); break;}
  }
}
