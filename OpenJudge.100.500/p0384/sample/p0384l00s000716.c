#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LENGTH 1200

int main()
{
  int i;
  char ch;

  for( ; ; )
  {
    scanf("%c", &ch);
    if( isupper(ch) )
    {
      ch += 32;
    }
    else if( islower(ch) )
    {
      ch -= 32;
    }
    printf("%c", ch);
    if( ch == '\n' )
      break;
  }
}

