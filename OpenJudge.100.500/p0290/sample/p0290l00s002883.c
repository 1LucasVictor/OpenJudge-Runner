#include <stdio.h>
#include <math.h>

int isPrime(int);

int main(){
  int i = 0, n, total = 0;
  int num[10000];

  scanf("%d", &n);
  while((scanf("%d", &num[i])) != EOF) {
    i++;
  }

  for(i = 0; i < n; i++) {
    if(isPrime(num[i])) total++;
  }
  printf("%d\n", total);

  return 0;
}

int isPrime(int num) {
  int i;

  if (num == 2) return 1;
  if (num < 2 || num%2 == 0) return 0;

  i = 3;
  while (i <= sqrt(num)) {
    if(num%i==0) return 0;
    i += 2;
  }
  return 1;
}