#include<stdio.h>

int isPrime(int);

int main(){
  int n, i, j = 0;
  int A[10000];

  scanf("%d",&n);

  for(i = 0; i < n; i++) scanf("%d",&A[i]);
  for(i = 0; i < n; i++){
    if(isPrime(A[i]) == 1) j++;
      }

  printf("%d\n",j);

  return 0;
}

int isPrime(int x){
  int i;

  if(x <= 1) return 0;

  for(i = 2; i < x - 1; i++){
    if(x % i == 0) return 0;
  }

  return 1;
}