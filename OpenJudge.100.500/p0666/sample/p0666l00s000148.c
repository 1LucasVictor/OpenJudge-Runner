#include <stdio.h>

int main(){
  int X,A,B;
  scanf("%d %d %d",&X,&A,&B);
  if(B<=A){
    printf("delicious\n");
  }
  if((A<B) && (B<=X+A)){
    printf("safe\n");
  }
  if(B>X+A){
    printf("dangerous\n");
  }
}
