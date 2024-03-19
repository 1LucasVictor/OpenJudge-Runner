#include<stdio.h>

int main(void){

  int A,B,T;
  int answer;

  scanf("%d %d %d",&A,&B,&T);

  answer = ((int)(T+0.5)/A) * B;
  
  printf("%d\n",answer);

  return 0;

}