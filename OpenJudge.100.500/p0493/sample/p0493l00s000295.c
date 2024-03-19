#include<stdio.h>

void main(){
  int x, happy[3];
  scanf("%d",&x);
  
  happy[0] = x/500;
  x = x%500;
  happy[1] = x/5;
  happy[2] = happy[0]*1000 + happy[1]*5;  
  
  printf("%d",happy[2]);
}