#include <stdio.h>

int main(void) 
{
  int n;
  int a, b, c, d;
  int combination;

  while (scanf("%d", &n) != EOF) {

    combination = 0;

    for (a = 0; a <= 9; a++) 
      for (b = 0; b <= 9; b++) 
	for (c = 0; c <= 9; c++) 
	  for (d = 0; d <= 9; d++) 
	    if (a + b + c + d == n) 
	      combination++;

    printf("%d\n", combination);
  }

  return 0;
}