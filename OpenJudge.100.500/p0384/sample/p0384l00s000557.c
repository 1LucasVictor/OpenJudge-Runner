#include<stdio.h>
char exchange(char);
int main(void)
{
  char c='\0';
  while(c!='\n')
    {
      scanf("%c",&c);
      printf("%c",exchange(c));
    }
  return 0;
}
char exchange(char c)
{
  if(c>='A'&&c<='Z') return c+'a'-'A';
  else if(c>='a'&&c<='z') return c+'A'-'a';
  return c;
}
