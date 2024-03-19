#include <stdio.h>
#include <stdlib.h>

  int stack[100];
  int top=0;
void push(int num)
{

  if(top==100){
    printf("stack overflow\n");
    exit(2);
  }
  stack[top] = num;
  top++;
}

int pop(void)
{

  if(top==0){
    printf("stack is empty\n");
    exit(3);
  }
  top--;
  return stack[top];
}
int main(){
  int num1,num2,status,num;
  char str[100];

  while((status=scanf("%s",str))!=EOF){
    if(*str=='+'){
      num1=pop();
      num2=pop();
      push(num1+num2);
    }else if(*str=='-'){
      num2=pop();
      num1=pop();
      push(num1-num2);
    }else if(*str=='*'){
      num1=pop();
      num2=pop();
      push(num1*num2);
    }else{
      num=atoi(str);
      push(num);
    }

  }
  printf("%d\n",pop());

  return 0;
}



