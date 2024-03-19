#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int isempty(void);
int isfull(void);
int push(int);
int pop(void);

int top = 0;
int stack[MAX];

int main()
{
  int x, a, b;
  char s[100];
  while(scanf("%s", s) != EOF) {
    if(s[0] == '+') {
      push(pop()+pop());
    }
    else if(s[0] == '-') {
      a = pop();
      b = pop();
      push(b-a);
    }
    else if(s[0] == '*') {
      push(pop()*pop());
    }
    else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n", pop());
  return 0;
}
  
int isempty(void)
{
  if(top == 0)
    return 1;
  else
    return 0;
}
  
int isfull(void)
{
  if(top >= MAX-1)
    return 1;
  else
    return 0;
}

int push(int x)
{
  if(isfull()) {
    fprintf(stderr, "エラー（オーバーフロー）\n");
    exit(1);
  }
  top++;
  stack[top] = x;
}

int pop(void)
{
  if(isempty()) {
    fprintf(stderr, "エラー（アンダーフロー）\n");
    exit(2);
  }
  top--;
  return stack[top+1];
}