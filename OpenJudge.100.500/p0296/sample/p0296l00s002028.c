#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=0,S[100];

void push(int);
int pop(void);
int isEmpty(void);
int isFULL(void);


int main(){
  int x,a,b;
  char s[100];

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      a=pop();
      b=pop();
      push(a+b);

    } else if ( s[0] == '-' ){
      a=pop();
      b=pop();
      push(b-a);

    } else if ( s[0] == '*' ){
      a=pop();
      b=pop();
      push(a*b);
    } else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",pop());
  return 0;
}





void push(int x)
{
  if(isFULL()==1)
    S[++top]=x;
}

int pop()
{
  if(isEmpty()==1)
  top--;
  return S[top+1];
}


int isEmpty()
{
  if(top==0)return 0;
  else return 1;
}

int isFULL()
{
  if(top>100-1)return 0;
  return 1;
}