#include<stdio.h>
#include<stdlib.h>

#define nummax 100
#define arrmax 99
int top = 0,S[nummax];

void push(int);
void pop();

int main()
{
  int i,j,num;
  char x,moji[10],a;


  while(scanf("%s",moji)!= EOF)
{ 
  if( moji[0] != ' '  )
    {
      if( moji[0] == '+' )
	{
	  S[top-1] = S[top-1] + S[top];
	  pop();
	}
      else if( moji[0] == '-' )
	{
	  S[top-1] = S[top-1] - S[top];
	  pop();
	}
      else if( moji[0] == '*')
	{
	  S[top-1] = S[top-1] * S[top];
	  pop();
	} 
      else
	{
	      num = atoi(moji);
	      push(num);
	    }
	}
 }  
  for( i = 1 ; i <= top ; i++ )
    printf("%d\n",S[i]);

  return 0;
}

void push(int x)
{
  if( top >= nummax-1 ) exit(3);
  top++;
  S[top] = x;
}

void pop(void)
{
  if( top == 0 ) exit(2);
  top--; 
}