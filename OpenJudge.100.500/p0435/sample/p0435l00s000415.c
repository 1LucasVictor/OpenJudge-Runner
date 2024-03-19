#include<stdio.h>
int main(void){
  int N;
  int D,d;
  int X;
  int Y;
  int Z;
  int i,j;
  scanf("%d",&N);
  scanf("%d",&D);
  d = D * D;
  
  for(i=0;i<N;i++){
    scanf("%d",&X);
    scanf("%d",&Y);
    Z = X*X + Y*Y;
    if(d >= Z){
      j++;
    }
  }
  printf("%d",j);
  return 0;
}