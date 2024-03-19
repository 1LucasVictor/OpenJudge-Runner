#include <stdio.h>

int main()
{
  int ret, i;
  int H, N, A, total;

  ret = scanf("%d %d", &H, &N);
  total = 0;
  for ( i=0; i<N; i++ ) {
    ret = scanf("%d", &A);
    total += A;
  }
  if ( H <= total )
    printf("Yes\n");
  else
    printf("No\n");

  return 0;
}
