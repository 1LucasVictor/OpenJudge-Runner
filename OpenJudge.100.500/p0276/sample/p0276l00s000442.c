#include <stdio.h>
#define Max 100
int n, A[Max][Max] = {0};

void print(int A[][Max]) {
  for ( int i = 0; i < n; ++i ) {
    for ( int j = 0; j < n; ++j ) {
      printf("%d", A[i][j]);
      if ( j < n - 1 ) printf(" ");
      if ( j == n - 1 ) putchar('\n');
    }
  }
}

int main(void) {
  int k, u, v;
  scanf("%d", &n);
  for ( int i = 0; i < n; ++i ) {
    scanf("%d", &u);
    scanf("%d", &k);
    for ( int j = 0; j < k; ++j ) {
      scanf("%d", &v);
      A[u - 1][v - 1] = 1;
    }
  }
  print(A);
}

