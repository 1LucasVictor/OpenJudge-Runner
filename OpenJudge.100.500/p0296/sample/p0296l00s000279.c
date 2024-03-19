#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char op[7 + 1];
  int stack[100];
  int in = 0;
  int len = 0;
  int tmp1, tmp2;

  while ((op[len] = getchar()) != EOF) {
    if (op[len] == ' ' || op[len] == '\n') {
      op[len] = '\0';
      if (atoi(op) != 0) {
	stack[in++] = atoi(op);
	len = 0;
      } else {
	switch (op[0]) {
	case '+':
	  tmp1 = stack[--in];
	  tmp2 = stack[--in];
	  stack[in++] = tmp2 + tmp1;
	  break;
	  
	case '-':
	  tmp1 = stack[--in];
	  tmp2 = stack[--in];
	  stack[in++] = tmp2 - tmp1;
	  break;

	case '*':
	  tmp1 = stack[--in];
	  tmp2 = stack[--in];
	  stack[in++] = tmp2 * tmp1;
	  break;

	default:
	  break;
	}
	len = 0;
      }
    } else len++;
  }

  printf("%d\n", stack[0]);

  return 0;
}