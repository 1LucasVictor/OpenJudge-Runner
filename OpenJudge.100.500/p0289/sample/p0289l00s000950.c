#include<stdio.h>
#include<stdlib.h>

int main(){
  int x, y;
  int A, B, R;

  scanf("%d",&x);
  if(x<1 || 1000000000<x) exit(1);

  scanf("%d",&y);
  if(y<1 || 1000000000<x) exit(2);

  A = x;
  B = y;

  while(B != 0){
    R = A%B;
    A = B;
    B = R;
  }
  printf("%d\n",A);


  return 0;
}