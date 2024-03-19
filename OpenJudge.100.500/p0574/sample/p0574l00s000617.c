#include <stdio.h>
#include <string.h>
int main()
{
  char s[4];
  scanf("%s",&s);
  for(int i = 1 ; i<= 3; i++)
  {
    if(s[i] == s[i+1] ) 
    {
      printf("Bad\n");
      return 0;
    }
    else
    {
      printf("Good\n");
  	  return 0;
    }
  }
}