#include<stdio.h>
int main(void)
{
  int a,b;
  char op;
  while(1)
  {
    if(op=='?')
      break;
    scanf("%d %c %d",&a,&op,&b);
    if(op=='+')
      printf("%d\n",a+b);
    if(op=='-')
      printf("%d\n",a-b);
    if(op=='*')
      printf("%d\n",a*b);
    if(op=='/')
      printf("%d\n",a/b);
  }
  return 0;
}

