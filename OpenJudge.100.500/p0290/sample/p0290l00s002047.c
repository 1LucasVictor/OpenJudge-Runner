#include <stdio.h>

int isPrime(x){
  int i;
  if(x <= 1)
    return 0;

  for(i = 2; i < x - 1; i++){
    if((x % i) == 0)
      return 0;
  }
  return 1;
}

int main(){
  int x, n, i, count=0;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d", &x);
    if(isPrime(x)) count++;
  }

  printf("%d\n", count);

  return 0;
}