#include<stdio.h>
#include<stdlib.h>

#define N 8

void funk(int);

int row[N],col[N],A[2 * N - 1],B[2 * N - 1];

int main() {
  int i,x,a,b;

  scanf("%d",&x);
  for(i = 0; i < x; i++) {
    scanf("%d%d",&a,&b);
    row[a] = b + 1;
    col[b] = A[a + b] = B[a - b + 7] = 1;
  }

  funk(0);

  return 0;
}

void funk(int a) {
  int i,j;

  if(a == N) {
    for(i = 0; i < N; i++) {
      for(j = 0; j < N; j++) {
	printf("%c",(row[i] == j + 1) ? 'Q' : '.');
      }
      putchar('\n');
    }
    return;
  }

  if(row[a]) {
    funk(a + 1);
    return;
  }else{
    for(i = 0; i < N; i++) {
      if(col[i] || A[a + i] || B[a - i + N - 1]) {
	continue;
      }
      row[a] = i + 1;
      col[i] = A[a + i] = B[a - i + N - 1] = 1;
      funk(a + 1);
      row[a] = col[i] = A[a + i] = B[a - i + N - 1] = 0;
    }
  }
}

