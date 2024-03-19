#include <stdio.h>
int main()
{
  int a, b,n=0;
  char op;
  while(n = 1){
    scanf("%d %c %d", &a, &op, &b);
    if(op == '+')
      printf("%d\n",a+b);
    if (op == '-')
      printf("%d\n",a-b);
    if (op == '*')
      printf("%d\n",a*b);
    if (op == '/')
      printf("%d\n",a/b);
    if (op == '?')
      break;
  }
  return 0;
}