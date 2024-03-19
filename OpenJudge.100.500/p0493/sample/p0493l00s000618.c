#include <stdio.h>
#include <string.h>
int main(void){
  long int x;
  long int hp=0;
  int voo=0;
  int v=0;
  scanf("%ld",&x);

  while(x>=500){
    x=x-500;
    hp=hp+1000;
  }
  while(x>=5){
    x=x-5;
    hp=hp+5;
  }
  printf("%d",hp);
  return 0;
  }