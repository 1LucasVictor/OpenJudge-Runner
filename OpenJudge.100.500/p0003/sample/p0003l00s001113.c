#include <stdio.h>

int main(int argc, char *argv[])
{
  int a, b, c, d, e, f;

  while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF)
    {
      double x, y;
      double i = a*e - b*d;

      if(i == 0)
	continue;

      x = (c*e - b*f)/i;
      y = (-c*d + a*f)/i;

      //x = (x < 0) ? x - 0.0005 : x + 0.0005;
      //y = (y < 0) ? y - 0.0005 : y + 0.0005;

      printf("%.3f %.3f\n", x, y);
    }
  return 0;
}