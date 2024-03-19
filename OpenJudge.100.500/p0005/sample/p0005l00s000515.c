#include<stdio.h>

void put_rstring(const char str[])
{
  unsigned length = 0;
  while(str[length])
  length++;
  for(; length>0; length--)
  putchar (str[length-1]);
}
  

int main()
{
 char str[21];
 scanf("%s",str);

 put_rstring(str);
 putchar('\n');
return 0;
}