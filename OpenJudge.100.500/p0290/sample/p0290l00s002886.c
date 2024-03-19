#include <stdio.h>
#include <string.h>

#define MAX_N 10000

int is_prim(int val) {
  int i;
  if(val == 2) return 1;
  if(val < 2 || val%2 == 0) return 0;
  for(i = 3; i*i <= val; i+=2) {
    if(val%i == 0) return 0;
  }
  return 1;
}

int main() {
  int prim[MAX_N + 10];
  int n, val, ans = 0;
  int i;
  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    scanf("%d", &val);
    if(is_prim(val)) ans++;
  }
  printf("%d\n", ans);
  return 0;
}