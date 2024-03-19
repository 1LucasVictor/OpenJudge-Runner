#include <stdio.h>

int main(int argc, char *argv[])
{
  int debt = 100000;
  int n;
  int i;
  int remainder;

  scanf("%d", &n);

  for(i = 0; i < n; i++)
    {
      debt *= 1.05;
      if((remainder = debt % 1000) != 0)
	debt += 1000 - remainder;
    }
    
  printf("%d\n", debt);

  return 0;
}