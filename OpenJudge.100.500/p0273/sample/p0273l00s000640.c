#include<stdio.h>

int main(){
  int n, F[50];
  F[0] = 1;
  F[1] = 1;
  scanf("%d", &n);

  for(int i = 2;i <= n;i++) F[i] = F[i-1] + F[i-2];

  printf("%d\n", F[n]);

  return 0;
}