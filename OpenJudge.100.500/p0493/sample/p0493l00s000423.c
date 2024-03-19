#include <stdio.h>

int main(){
  int X;
  int happy = 0;
  
  scanf("%d",&X);
  
  while(X>5){
    if(X>=500){
      X-=500;
      happy+=1000;
    }else if(X>5){
      X-=5;
      happy+=5;
    }
  }
  
  printf("%d\n",happy);
}