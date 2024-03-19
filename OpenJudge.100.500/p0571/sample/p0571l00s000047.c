#include <stdio.h>

int main(void){
  int a,b,n,train,taxi;
  scanf("%d %d %d",&n,&a,&b);

  train=a*n;
  taxi=b;

  if(train>taxi){
    printf("%d",taxi);
  }
  else if(taxi>=train){
    printf("%d",train);
  }

  return 0;
}
