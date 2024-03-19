#include <stdio.h>
 
int main(void){
  
  int x;
  int h = 0;
  scanf("%d",&x);
  h += x/500*1000;
  h += (x%500)/5*5;
  printf("%d",h);
  
}