#include <stdio.h>
#define STACK_SIZE 100

int stack[STACK_SIZE];
int stack_size = 0;

int pop()
{
  if (stack_size <= 0) return 0;
  return stack[--stack_size];
}

int push(int a)
{
  stack[stack_size++] = a;
}

int calc(char *s)
{
  int type;
  while (*s) {
    switch(*s) {
    case ' ':
    break;
    case '+':
      push(pop()+pop());
      break;
    case '-':
      push(pop()-pop());
      break;
    case '*':
      push(pop()*pop());
      break;
    default:
      push(*s - '0');
    }
    s++;
  }
  return pop();
}

int main()
{
  char s[100];
  scanf("%[^\n]*s", s);
  printf("%d\n", calc(s));
}