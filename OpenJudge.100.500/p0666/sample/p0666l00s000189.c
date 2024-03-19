#include<stdio.h>
#include<iso646.h>

int main(){
  int X,A,B;

  scanf("%d %d %d",&X,&A,&B);
  if(B < A){
    printf("delicious\n");
  }else if((B - A) <= X){
    printf("safe\n");
  }else if((B - A) > X + 1){
    printf("dangerous\n");
  }
  return 0;
}
