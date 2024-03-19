#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isEmpty(int);
int isFull(int);
void push(int);
int pop(void);

int top;
int stack[100];

int main(){
  int x;
  char s[100];
  int d1, d2;

  //initialize
  top = 0;

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      d1 = pop();
      d2 = pop();
      push(d1 + d2);
    } else if ( s[0] == '-' ){
      d1 = pop();
      d2 = pop();
      push(d2 - d1);
    } else if ( s[0] == '*' ){
      d1 = pop();
      d2 = pop();
      push(d1 * d2);
    } else {
      x = atoi(s);
      push(x);
    }
  }

  printf("%d\n", stack[1]);

  return 0;
}

int isEmpty(int top){
  //isEmpty
  if(top == 0)return 1;
  //isn'tEmpty
  else return 0;
}
int isFull(int top){
  //isFull
  if(top == 99)return 1;
  //isn'tFull
  else return 0;
}

void push(int x){
  if(isFull(top) == 1)
    printf("error\n");
  top++;
  stack[top] = x;
//  printf("%d is push\n", x);
}

int pop(){
  if(isEmpty(top) == 1)
    printf("error\n");
  top--;
//  printf("%d is pop\n", stack[top+1]);
  return stack[top+1];
}