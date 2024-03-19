#include <stdio.h>
#define MAX 100
#define TRUE 1
#define FALSE 0

char S[MAX];
int top;
void initialize();
int isEmpty();
int isFull();
void push( int );
int pop();
int main()
{
  int fst, snd, trd;
  char c;
  char x[100];
  
  initialize();
  isEmpty();
  isFull();
  
  while( 1 )
    {
      c = scanf("%s", &x);
      if(c == EOF) break;
      
      if(x[0] == '+')
	{
	  fst = pop();
	  snd = pop();
	  push( snd+fst );
	}
      else if(x[0] == '-')
	{
	  fst = pop();
	  snd = pop();
	  push( snd-fst );
	}
      else if(x[0] == '*')
	{
	  fst = pop();
	  snd = pop();
	  push( snd*fst );
	}
      else push(atoi(x));
    }
  trd = pop();
  printf("%d\n", trd);
  return 0;
}

void initialize()
{
  top = 0;
}
int isEmpty()
{
  if(top == 0) return TRUE;
  else return FALSE;
}
int isFull()
{
  if(top >= MAX-1) return TRUE;
  else return FALSE;
}
void push( int x )
{
  if(isFull() == TRUE) printf("!!Error(OverFrow)!!\n");
  else
    {
      top++;
      S[top] = x;
    }
}
int pop()
{
  if(isEmpty() == TRUE) printf("!!Error(UnderFrow)!!\n");
  else
    {
      top--;
      return S[top+1];
    }
}