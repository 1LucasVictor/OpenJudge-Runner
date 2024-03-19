#include <stdio.h>
#include <math.h>
#define N_MAX 10000
#define TRUE 1
#define FALSE 0

int isPrime(int);

int main(){
  int i, n, count = 0, x[N_MAX];

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &x[i]);
  }
  
  for(i = 0; i < n; i++){
    count += isPrime(x[i]);
  }

  printf("%d\n", count);

  return 0;
}


int isPrime(int x){
  int i;
  if(x == 2) return TRUE;
  if(x < 2 || x % 2 == 0) return FALSE;
  for(i = 3; i <= sqrt(x); i += 2){
    if(x % i == 0) return FALSE;
  }
  return TRUE;
}

