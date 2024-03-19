#include<stdio.h>


int stack[30];
int top;

void push(int n){
  stack[top] = n;
  top += 1;
}

int pop(void){
  top -= 1;
  return stack[top];
}


void dump(void){
  int n;
  printf("(%d) [", top);
  for(n=0;n<top; n++){
    printf("%d,", stack[n]);

  }
  printf("]\n");

}

int main(){
  int car;
  top = 0;

  //dump();
  while (scanf("%d", &car)==1){
    if (car){
      push(car);
    }else{
      car = pop();
      printf("%d\n", car);
    }
    //dump();
  }
  return 0;
}