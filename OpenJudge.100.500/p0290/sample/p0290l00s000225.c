#include <stdio.h>

#define MAXLENGTH 10000 //入力の最大数

main() {

  int i, j;
  int c =0; //素数カウンタ
  int N; //与えられる値の数
  int A[MAXLENGTH]; //与えられた値を格納する配列


  scanf(" %d", &N);

  for( i=0; i<N; i++) {
    scanf(" %d", &A[i]);
  }

  for( i=0; i<N; i++) {
    for( j=2; j <= A[i]/2; j++) {
      
      if( A[i] % j == 0) {
	break;
      }
    }
    if( j > A[i]/2) {
      c++;
    }

  }

  printf("%d\n", c);

  return 0;
}