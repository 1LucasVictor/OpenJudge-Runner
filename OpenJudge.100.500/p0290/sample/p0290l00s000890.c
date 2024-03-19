#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int judge(x) {
  int i = 3;
 
  if(x == 1) return 0;
  if(x%2 == 0 && x != 2)
    return 0;
  while((double)i < sqrt((double)x)) {
    if(x%i == 0) return 0;
    i++;
  }
  return 1;
}

int main() {
  int n, i;
  int s = 0;
  int *A;

  scanf("%d", &n);
  A = malloc(n*sizeof(int));

  for(i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  for(i = 0; i < n; i++) {
    s += judge(A[i]);
  }

  printf("%d\n", s);

  return 0;
}