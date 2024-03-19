#include<stdio.h>

int main(void)
{
  int x[20000], y[20000];
  char op[128];
  int i=0, j;
  int result[20000];

  while(1)
    {
      scanf("%d %s %d", &x[i], &op[i], &y[i]);
      if (op[i] == '?')
	break;
      else if (op[i] == '+')
	result[i] = x[i] + y[i];
      else if (op[i] == '-')
	result[i] = x[i] - y[i];
      else if (op[i] == '*')
	result[i] = x[i] * y[i];
      else if (op[i] == '/')
	result[i] = x[i] / y[i];
      i++;
    }

  for(j=0;j<i;j++)
    {
      printf("%d\n", result[j]);
    }

  return 0;
}