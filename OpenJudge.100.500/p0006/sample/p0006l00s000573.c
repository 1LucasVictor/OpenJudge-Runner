#include<stdio.h>

int main(void){

  int x;
  int i;
  int start = 100000;

  scanf("%d",&x);

  for(i=0;i<x;i++){
    int rest;
    rest = start * 0.05;
    start += rest;

    if( start % 1000 != 0){
      start += (1000 - (start % 1000));
    }
  }

  printf("%d\n",start);
  return 0;

}