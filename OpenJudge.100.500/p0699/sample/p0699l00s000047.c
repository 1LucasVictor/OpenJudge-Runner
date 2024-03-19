#include <stdio.h>

int t, five, seven;

int main(void)
{
  int i;
  
  for (i = 0; i < 3; ++i)
  {
	scanf("%d", &t);
    if (t == 5) five++;
    else if (t == 7) seven++;
  }
  
  printf((five == 2 && seven == 1) ? "YES" : "NO");
}