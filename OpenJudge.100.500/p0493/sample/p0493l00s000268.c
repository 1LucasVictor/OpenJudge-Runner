#include<stdio.h>

int main(){
  long int x,happy=0;
  scanf("%ld",&x);
  happy=1000*(x/500)+5*((x%500)/5);
  printf("%ld",happy);
}