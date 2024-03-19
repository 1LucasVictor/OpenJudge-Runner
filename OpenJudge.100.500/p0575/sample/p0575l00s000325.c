#include <stdio.h>

int main(int argc, char const *argv[]) {
  int X, A;
  scanf("%d %d",&X,&A );

  if(X < A){
    printf("0");
  }else if (X >= A){
    printf("10" );
  }
  return 0;
}