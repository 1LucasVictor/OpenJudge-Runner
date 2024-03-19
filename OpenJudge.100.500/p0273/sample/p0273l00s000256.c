#include<stdio.h>

int main(){
  int n, i; 
  int M[50];

  scanf("%d", &n);

  M[0] = M[1] = 1;
  for ( i = 2; i <= n; i++ )
    M[i] = M[i-1] + M[i-2];
  
  printf("%d\n", M[n]);

  return 0;
}

