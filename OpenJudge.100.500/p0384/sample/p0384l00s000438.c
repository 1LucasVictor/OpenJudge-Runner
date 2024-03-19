#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LENGTH 1200

int main()
{
  int i;
  char st[LENGTH] = {};

  fgets(st, LENGTH, stdin);

  for( i = 0 ; i < strlen(st) ; i++ )
  {
    if( isupper(st[i]) )
    {
      st[i] = st[i] + 32;
    }
    else if( islower(st[i]) )
    {
      st[i] = st[i] - 32;
    }
  }
  printf("%s", st);
}

