#include<stdio.h>

int main(){
  int X;
  scanf("%d",&X);
  int happy=0;
  if(X>=500){
    happy += (X / 500)*1000;
    X = X % 500;
  }
  if(X>0){
    happy += (X / 5)*5;
    X = X % 5;
  }
  printf("%d\n",happy);
  return 0;
}