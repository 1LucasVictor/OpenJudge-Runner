#include  <stdio.h>
/* Aizu Online Judge Problem 	    */
/* Volume0 0006:Reverse Sequence 	*/

int main(void)
{
  char str[21];
  int i;

  scanf("%s", str);

  i = 0;
  while(str[i] != '\0')
    i++;
  i--;

  while(i >= 0)
  {
    printf("%c", str[i]);
    i--;
  }
  printf("\n");

  return 0;
}