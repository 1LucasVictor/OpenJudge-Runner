#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
int push(int x);
int pop();
int isEmpty();
int isFULL();
int Stack[MAX]; 
int top=0;

int main(){
  int x,a,b;
  char s[100];
  initialize();

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      push(pop() + pop());

    } 
    else if ( s[0] == '-' ){
      b = pop();
      push(pop()-b);

    } 
    else if ( s[0] == '*' ){

      push(pop() * pop());

    }
    else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",Stack[top]);

  return 0;
}

int initialize()
{
  top = 0;
}

int pop()
{
  if(isEmpty==0){printf("error : The stack is empty!!\n");
    exit(1);
  }
  top--;
  return Stack[top+1];
}

int push(int x)
{
  if(isFULL==0){
printf("error : The stack is FULL!!\n");
    exit(1);
  }
  top++;
  Stack[top]=x;
}

int isEmpty()
{
  if(top==0)return 0;
  else return 1;
}

int isFULL()
{
  if(top >= MAX - 1)return 0;
  else return 1;
}