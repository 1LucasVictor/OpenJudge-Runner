#include<stdio.h>
int main(void)
{
  int X,A,B;
  scanf("%d %d %d",&X,&A,&B);

  if(X >= -A+B){
    if(A >= B){
      printf("delicious\n");
    } else {
      printf("safe\n");
    }
  } else {
    printf("dangerous\n");
  }
  return 0;
}