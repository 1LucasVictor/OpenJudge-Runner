#include <stdio.h>
#define D(fmt,...) fprintf(stderr, fmt, ##__VA_ARGS__)
#define P(fmt,...) fprintf(stdout, fmt, ##__VA_ARGS__)

int gcd (int a, int b) {
  int small = a < b ? a : b;
  int big = a < b ? b : a;
  int gcd  = 1;
  int i = 0;
  if (big % small == 0) return small;
  for (i = small - 1; 1 < i ; i--) {
    if (small % i == 0 && big % i == 0) {
      small /= i;
      big /= i;
      gcd *= i;
      i = small - 1;
    }
  }
  return gcd;
}

int lcm (int a, int b, int g) {
  int lcm = 0;
  int min = a < b ? a : b;
  int x = a / g;
  int y = b / g;
  return g * x * y;
}
		      
int main (int ac, char **av)
{
  while(feof(stdin) == 0) {
    int a, b = 0;
    fscanf(stdin, "%d %d\n", &a, &b);
    int g = gcd(a, b);
    P("%d %d\n", g, lcm(a, b, g));
  }
  return 0;
}