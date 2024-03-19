#include<stdio.h>

int main(void){
  int X,A,B;

scanf("%d,%d,%d",&X,&A,&B);

  if(B-A>0){
  printf("safe\n");
  }
  else if(B-A<=X){
    printf("delicious\n");
  }
  else if(X+1<B-A)
  {
    printf("dangerous\n");
  }

  return 0;
}
