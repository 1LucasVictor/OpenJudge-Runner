#include <stdio.h>

int main(int argc, char *argv[])
{
  int a, b, c, d, e, f;

  while((scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f)) != EOF)
    {
      double x, y;
      double i = a*e - b*d;

      if(i == 0)
	continue;

      x = (c*e - b*f)/i;
      y = (-c*d + a*f)/i;

      printf("%.3f %.3f\n", (x == 0.0) ? 0.0 : x, (y == 0.0) ? 0.0 : y); 
    }
  return 0;
}