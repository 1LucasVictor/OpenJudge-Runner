#include <stdio.h>

int Okikae(int *x, int k){
  int tmp;
  tmp = *x-k;
  if(tmp < 0) tmp = -tmp;
  *x = tmp;
  return *x;
}

int main(void){
  int n, k, count=0;
  scanf("%d %d", &n, &k);

  while(n > Okikae(&n, k)){
  }

  Okikae(&n, k);
  printf("%d\n", n);
  return 0;
}