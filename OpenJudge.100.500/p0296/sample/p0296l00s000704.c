#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 101
void push(int);
int pop(void);
void dealOperator(char);
int isOperator(char);
void printStack(void);
int stack[MAX];
int top=0;
int main(void)
{
  char s[10];//input comes here
  int ans;//calculation result comes here
  for(;;)
    {
      if(scanf("%s ",s)==EOF) break;
      if(isOperator(s[0])==1) dealOperator(s[0]);
      else push(atoi(s));
      //printStack();
    }
  ans=pop();
  printf("%d\n",ans);
  return 0;
}
void push(int x)
{
  if(top>=MAX-1) exit(1);//stack is full
  else
    {
      top++;
      stack[top]=x;
      //printf("stack[%d]=%d is pushed\n",top,x);
    }
}
int pop(void)
{
  if(top<=0) exit(2);//stack is empty
  else
    {
      top--;
      //printf("stack[%d]=%d is poped\n",top+1,stack[top+1]);
      return stack[top+1];
    }
}
void dealOperator(char c)
{
  int b=pop();//value on the top
  int a=pop();//value on the 2nd top
  switch(c)
    {
    case '+':
      push(a+b);
      break;
    case '-':
      push(a-b);
      break;
    case '*':
      push(a*b);
      break;
    default:
      exit(3);//undefined operator
    }
}
int isOperator(char c)
{
  if(c=='+'||c=='-'||c=='*') return 1;
  else return 0;
}
void printStack(void)
{
  int i;
  for(i=1;i<=top;i++)
    {
      if(i>1) printf(" ");
      printf("%d",stack[i]);
    }
  printf("\n");
}
