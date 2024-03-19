#include<stdio.h>

int main(void){

  int i;
  int stack[10];
  int car;
  int num;

  num = 0;
  for(i=0;i<10;i++){
    stack[i] = 0;
  }

  while(scanf("%d ",&car)!=EOF){
    if(car){
      stack[num] = car;
      num++;
    }else{
      num--;
      printf("%d\n",stack[num]);
      stack[num] = 0;
    }
  }

  return 0;
}