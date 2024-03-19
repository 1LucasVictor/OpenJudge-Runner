#include <stdio.h>

int main(){
  int A,B,X;
  scanf("%d%d%d",&X,&A,&B);
  if(A - B >= 0){
    printf("delicious\n");
  }else if(A - B < 0 && A + X - B >= 0){
    printf("safe\n");
  }else{
    printf("dangerous\n");
  }

  return 0;
}
