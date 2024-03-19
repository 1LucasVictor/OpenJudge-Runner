#include<stdio.h>

int main(){
  int A,B,T;
  scanf("%d %d %d",&A,&B,&T);
  int c = T / A;
  printf("%d",c * B);
}