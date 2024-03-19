#include<stdio.h>
#include<string.h>
int main ()
{
  int a;
  char code[30];
  scanf("%s",&code);
  for(a=0;code[a]!=code[a+1];a++)
  {}
  if(strlen(code)==a+2)
  {
    printf("Good\n");
  }
  else
  {
    printf("Bad\n");
  }
  return 0;
}