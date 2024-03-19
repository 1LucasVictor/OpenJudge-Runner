#include <stdio.h>

void swap(unsigned long *n1, unsigned long *n2)
{
	unsigned long temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}

unsigned long cal_gcd(unsigned long n1, unsigned long n2)
{
	unsigned long rem;
  while (1) {
		rem = n2 % n1;
    if (rem == 0) {
      break;
    }
    n2 = rem;
    swap(&n1, &n2);
  }

  return n1;
}

unsigned long cal_lcm(unsigned long n1, unsigned long n2)
{
  unsigned long tmp;
  int i = 1;
  while (1) {
		tmp = n2 * i;
    if (tmp % n1 == 0) {
      break;
    }
    i++;
  }

  return tmp;
}

int main()
{
	unsigned long a, b;
  unsigned long gcd, lcm;

  while (scanf("%ld %ld", &a, &b) != EOF) {
    if (a > b) {
      swap(&a, &b);
    }
    gcd = cal_gcd(a, b);
    lcm = cal_lcm(a, b);

    printf("%ld %ld\n", gcd, lcm);
  }

  return 0;
}