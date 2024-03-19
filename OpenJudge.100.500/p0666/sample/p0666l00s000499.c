#include<stdlib.h>
#include<stdio.h>

int main(){
  long X,A,B;

  scanf("%ld %ld %ld",&X,&A,&B);

  if((B-A)<=0){
    printf("delicious\n");
  }else{if(B-A>X){
    printf("dangerous\n");
  }else{
    printf("safe");
  }
  }
  return 0;
}
