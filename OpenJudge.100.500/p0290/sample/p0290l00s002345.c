#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void sieve(int *list, long max) {
  int i,j;
  list[0] = 1;
  list[1] = 1;
  for(i = 2; i <= (int)sqrt(max); i++) {
    if(list[i] == 0) {
      for(j = 2; i*(long)j <= max; j++) list[i*j] = 1;
    }
  }
}


int main() {
  int N,i,t;
  scanf("%d", &N);
  long a[N],max;
  max = 0;
  for(i = 0; i < N; i++) {
    scanf("%ld", a+i);
    if(a[i] > max) max = a[i];
  }
  int *prime_list;
  prime_list = (int *)malloc(sizeof(int) * (max+1));
  memset(prime_list, 0, sizeof(int) * (max+1));
  sieve(prime_list,max);

  t = 0;
  for(i = 0; i < N; i++) {
    if(prime_list[a[i]] == 0) t++;
  }
  printf("%d\n", t);

  free(prime_list);
  return 0;
}