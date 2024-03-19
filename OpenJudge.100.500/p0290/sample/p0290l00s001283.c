#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
#define MAX 100000

int table[MAX];

int is_prime(int num) {
  int i;

  for(i = 2;i * i <= num;i++) {
    if(num % i == 0)
      return false;
  }

  return true;
}

void init_table() {
  int i, j;

  table[0] = table[1] = false;
  table[2] = true;

  for(i = 3;i < MAX;i++)
    table[i] = true;

  for(i = 2;i < MAX;i++) {
    if(is_prime(i)) {
      for(j = i * 2;j < MAX;j += i)
        table[j] = false;
    }
  }
}

int main() {
  int n, i, t, cnt;
  cnt = 0;

  init_table();

  scanf("%d", &n);
  for(i = 0;i < n;i++) {
    scanf("%d", &t);
    if(table[t]) cnt++;
  }

  printf("%d\n", cnt);

  return 0;
}

