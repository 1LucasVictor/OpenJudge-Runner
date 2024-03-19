#include <stdio.h>

int stack[10], stack_pt = -1;

void push(int x){
  stack[++stack_pt] = x;
}
int pop(void){
  if(stack_pt != -1){
    return stack[stack_pt--];
  }else{
    return -1;
  }
}
int main(void){
  for( ; ; ){
    int x;
    scanf("%d", &x);
    if(x){
      push(x);
    }else{
      int flag = pop();
      if(flag != -1){
        printf("%d\n", flag);
      }else{
        break;
      }
    }
  }
  return 0;
}