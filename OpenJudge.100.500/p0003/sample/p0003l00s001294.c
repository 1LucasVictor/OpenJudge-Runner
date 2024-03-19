#include <stdio.h>
#include <math.h>

double roundPoint4(double x) {
  x = x * 1000;
  if (x >= 0.0) {
    return floor(x + 0.5)/ 1000;
  } else {
    return -1.0 * floor(fabs(x) + 0.5) / 1000;
  }
}

int main (int ac, char **av )
{
  while (feof(stdin) == 0) {
    int a , b , c, d, e, f = 0;
    fscanf(stdin, "%d %d %d %d %d %d\n", &a, &b, &c, &d, &e, &f);
    double x, y = 0.0;
    if (a * e - b * d == 0) {
      x = 0;
    } else {
      x = roundPoint4(e * c - f * b) / (a * e - b * d) * 1.0;
    }
    if ( b * d - a * e == 0) {
      y = 0;
    } else {
      y = roundPoint4(c * d - a * f) / (b * d - a * e) * 1.0;
    }
    fprintf(stdout, "%.3f %.3f\n", x, y);
  }
  return 0;
}