#include <stdio.h>
int main(){
 int X,x,y;
 
 scanf("%d",&X);
  x=X/500;
 
  
  y=X%500;
  y=y/5;
  
  printf("%d",5*y+1000*x);
  
}