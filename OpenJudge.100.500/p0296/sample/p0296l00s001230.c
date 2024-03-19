#include<stdio.h>
#include<stdlib.h>

#define N 100

int isEmpty(void);
void push(int);
int pop(void);

int stack[N];
int top = 0;

int main(){
  int x,a,b;
  char str[100];



  while( scanf("%s", str) != EOF ){
    if ( str[0] == '+' ){
      a = pop();
      b = pop();
      push(a + b);
    } else if ( str[0] == '-' ){
      a = pop();
      b = pop();
      push(b - a);
    } else if ( str[0] == '*' ){
      a = pop();
      b = pop();
      push(a * b);

    } else {
      x = atoi(str);
      push(x);

    }
  }

  printf("%d\n",stack[top - 1]);

  return 0;


}

int isEmpty(void){

  if(top == 0){
    return 1; //Stack is Empty                                                  
  }else{
    return 0; //Stack is not Empty                                              
  }

}

void push(int num){
  if(top == N){
    printf("Stack overflow!\n");
    exit(2);
  }
  stack[top] = num;
  top++;
}

int pop(void){
  if(isEmpty() == 1){
    printf("Stack is empty!\n");
    exit(3);
  }
  top--;
  return stack[top];
}


