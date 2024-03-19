#include <stdio.h>

int main(){
  int stack[10];
  int i = 0;
  int in;
  
  while(scanf("%d", &in) != EOF){
    if(in){ //push
      stack[i++] = in;
    }
    else{ //pop
      printf("%d\n", stack[--i]);
    }
  }
}