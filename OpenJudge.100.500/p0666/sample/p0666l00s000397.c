#include<stdio.h>
int X, A, B;
int main(){
  scanf("%d%d%d", &X, &A, &B);
  if(B<=A){
    printf("delicious\n");
  }else if(B<=A+X){
    printf("safe\n");
  }else{
    printf("dangerous\n");
  }
}
