#include<stdio.h>

int main(void){
  int X,A,B;

scanf("%d,%d,%d",&X,&A,&B);

  if(B-A<X){
  printf("safe\n");
  }
  else if(B-A>=0){
    printf("delicious\n");
  }
  else if(X<B-A)
  {
    printf("dangerous\n");
  }

  return 0;
}