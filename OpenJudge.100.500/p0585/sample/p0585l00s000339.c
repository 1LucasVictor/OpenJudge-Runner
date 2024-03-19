#include<stdio.h>
int main(void){
  int A,B;
  int T;
  scanf("%d %d %d",&A,&B,&T);
  double t = (T+0.5) / A;
  int new_t=t;
  printf("%d",new_t*B);
}