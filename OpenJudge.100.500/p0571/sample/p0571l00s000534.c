#include <stdio.h>

int main(){
  int N,A,B;
  scanf("%d%d%d",&N,&A,&B);
  
  int train=0,taxi=0;
  train = N * A;
  taxi = B;
  printf("%d",min(train,taxi));
}

int min(int a, int b){
  if(a>=b){
    return b;
  }else{
    return a;
  }
}