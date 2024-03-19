#include <stdio.h>
#define NUM 100000

int main(void)
{
  int a,b;
  int gcd;
  int i;
  int j = 0;
  int k = 0;
  int l;
  int c[NUM];
  int d[NUM];

  scanf("%d %d", &a, &b);

  for(i = 1; i <= a; i++) {
    if(a%i == 0) {
     c[j] = i; 
     j = j + 1;
    }
  }

  for(i = 1; i <= b; i++) {
    if(b%i == 0) {
     d[k] = i;
     k = k + 1;
    }
  }

    for(i = 0; i < j; i++) {
      for(l = 0; l < k; l++) {
        if(c[i] == d[l]) {
          gcd = c[i];
        }
      }
    }

  printf("%d\n", gcd);

  return 0;
}