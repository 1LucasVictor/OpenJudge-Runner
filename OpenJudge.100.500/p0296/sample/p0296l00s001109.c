#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int stack[200] = {};
int stackPointer = -1;

void push(int);
void add();
void subtract();
void multiply();

int main(void)
{
  int i;
  char rawinput[400];
  scanf("%[^n]s", rawinput);
  char *token = strtok(rawinput, " \n");
  while (token != NULL)
    {
      if (!strcmp(token, "+"))
	{
	  add();
	}
      else if (!strcmp(token, "-"))
	{
	  subtract();
	}
      else if (!strcmp(token, "*"))
	{
	  multiply();
	}
      else
	{
	  push(atoi(token));
	}
      token = strtok(NULL, " \n");
    }
  printf("%d\n", stack[stackPointer]);
  return 0;
}

void push(int input)
{
  stack[++stackPointer] = input;
}

void add()
{
  int addition = stack[stackPointer] + stack[stackPointer-1];
  stack[stackPointer] = 0;
  stack[--stackPointer] = addition;
}

void subtract()
{
  int subtraction = stack[stackPointer-1] - stack[stackPointer];
  stack[stackPointer] = 0;
  stack[--stackPointer] = subtraction;
}

void multiply()
{
  int multiplication = stack[stackPointer] * stack[stackPointer-1];
  stack[stackPointer] = 0;
  stack[--stackPointer] = multiplication;
}

