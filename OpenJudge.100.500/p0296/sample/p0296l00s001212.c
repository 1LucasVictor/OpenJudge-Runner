//stack


#include<stdio.h>
#define N 100


void workspace(char *);

void push(int*,int *,int);
int pop(int*,int *);

int char2i(char);
//char i2char(int);

int stack[N];
int count = 0;
int main()
{
  int i=0;
  char input[N];

  //input data
  
  while(scanf("%s",input) == 1) {
    workspace(input);
  }

  //output data
  
    

  printf("%d\n",/*char2i(workspace(input))*/pop(stack,&count));

  return 0;
  
}

void  workspace(char *input)
	       
{
  int i,sum=0;
  int first,second;
  if('1' <= input[0] && '9' >= input[0])
    {
      for(i = 0; input[i] != '\0'; i++)
	{
	  sum=10*sum+char2i(input[i]);
	}
      push(stack,&count,sum);
    }



  else{
    if(input[0] == '+')
      {
	second = pop(stack,&count);
	first = pop(stack,&count);

	push(stack,&count,first + second);
      }
    else if(input[0] == '-')
      {
	second = pop(stack,&count);
	first = pop(stack,&count);

	push(stack,&count,first - second);
      }
    else if(input[0] == '*')
      {
	second = pop(stack,&count);
	first = pop(stack,&count);

	push(stack,&count,first * second);
      }	  
  }

      
}



void push(int *stack,int *count,int m)
{
  stack[(*count)++] = m;
}

int pop(int *stack,int *count)
{
  return stack[--(*count)];
}

int char2i(char m)
{
  return m - '0';
}

/*char i2char(int i)
{
  return i + '0';
  }*/

