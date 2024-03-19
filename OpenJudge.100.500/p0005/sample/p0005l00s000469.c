#include<stdio.h>
#include<string.h>

int main()
{
  char str[21];
  int length;
  int i;

  scanf("%s",str);
  length = strlen(str);

  for(i=length-1;i>=0;i--)
      putchar(str[i]);

 return 0;
}