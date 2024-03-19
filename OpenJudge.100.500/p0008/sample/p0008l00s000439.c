#include <stdio.h>

#define N 1000000

int isprime[N];

void gen(void) {
  int i, j;
  for(i = 0; i < N; i++) {
    isprime[i] = 1;
  }
  for(i = 2; i < 316.22; i++) {
    if(isprime[i]) {
      for(j = 0; i * (j + 2) < N; j++) {
        isprime[i * (j + 2)] = 0;
      }
    }
  }
}

int main(int ac, char **av) {
  char buf[256];
  int n, i, s;

  gen();

  while(fgets(buf, 256, stdin) != NULL) {
    sscanf(buf, "%d", &n);
    for(i = 2, s = 0; i <= n; i++) {
      s += isprime[i];
    }
    printf("%d\n", s);
  }
  return 0;
}