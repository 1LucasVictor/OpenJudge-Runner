#include <stdio.h>
#include <string.h>

int main()
{
  int i, j, sum = 0;
  char st[1000];

  for( ; ; )
  {
    scanf("%s", st);
    if( st[0] == '0' )
      break;
    for( j = 0 ; j < strlen(st) ; j++ )
    {
      sum += st[j] - '0';
    }
    printf("%d\n", sum);
    sum = 0;
  }
}

