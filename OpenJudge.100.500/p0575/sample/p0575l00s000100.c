#include<stdio.h>
int main(void)
{
  int X,A;
  scanf("%d%d",&X,&A);
  if(X<0||X>9||A<0||A>9){
    while(1){
      scanf("%d%d",&X,&A);
      if(X>=0&&X<=9&&A>=0&&A<=9){
        break;
      }
    }
  }
  if(X>=A){
    printf("10\n");
  }
  else{
    printf("0");
  }
  return 0;
}
    