#include<stdio.h>
#define N 10000

int PrimeN(int n) {
  if(n == 2) return 1;
  if(n % 2 == 0) return 0;
  int m;
  for(m = n/2; m > 1; m--){
    if(n % m == 0) return 0;
  }
  return 1;
}

int main() {
  int i = 0, n, count = 0, flag, list[N];
  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    scanf("%d", &list[i]);
    count += PrimeN(list[i]);
  }
  printf("%d\n", count);
  return 0;
}