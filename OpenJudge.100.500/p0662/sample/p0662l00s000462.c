#include <stdio.h>

int max(int a,int b){
  if(a > b){
    return a;
  }
  return b;
}

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int main(void){
  int A,B,C,D;
  scanf("%d%d%d%d",&A,&B,&C,&D);

  printf("%d\n",max(0,min(B,D)-max(A,C)));

  return 0;
}