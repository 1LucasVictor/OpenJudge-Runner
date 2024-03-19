#include <stdio.h>
#include <stdlib.h>
#define LEN (1e5+5)

int main()
{
  char ch; int c0 = 0, c1 = 0;
  while( (ch = fgetc(stdin)) != EOF ) {
    if(ch == '0') 		{ c0 += 1; }
    else if(ch == '1') 	{ c1 += 1; }
  }
  //printf("c0: %d c1: %d\n", c0, c1);
  printf("%d\n", 2 * ( (c0 < c1) ? c0 : c1 ) );
  return 0;
}