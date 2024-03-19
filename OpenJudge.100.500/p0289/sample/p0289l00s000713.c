#include<stdio.h>

int main(){

  int x,y,a,b,answer,i;

  i = 0;

  scanf("%d",&x);
  scanf("%d",&y);

  while(i < x && i < y){

    i = i + 1;

    a = x % i;

    b = y % i;

    if(a == 0 && b == 0){

      answer = i;

    }

  }

  printf("%d\n",answer);

  return 0;

}