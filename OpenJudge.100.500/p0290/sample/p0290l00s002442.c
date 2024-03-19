
#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int A[10000];

int isPrime(int n){

  int i;
  if (n == 2)
    return TRUE;

  if (n%2==0)
    return FALSE;

  for (i = 3; i < sqrt(i); i+=2) {
    if (n%i==0) {
      return FALSE;
    }
  }

  return TRUE ;
}


int main(int argc, char const *argv[]) {

  int n;
  int i;
  int num=0;
  scanf("%d\n", &n);
  for (i = 0; i < n; i++) {
    scanf("%d\n", &A[i]);
  }

  for (i = 0; i < n; i++) {
    if(isPrime(A[i]))
      num++;
  }
  printf("%d\n", num);
  return 0;
}