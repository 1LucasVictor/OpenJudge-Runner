#include <stdio.h>

int main()
{
  int i, N, tmp_n, ok_flag;
  scanf("%d", &N);
  ok_flag = 0;
  for (i=1;i<10;i++ ) {
    if ( (N % i) != 0 )
      continue;
    tmp_n = N / i;
    if ( tmp_n > 0 && tmp_n < 10 ) {
      ok_flag = 1;
      i = 10;
      break;
    }
  }
  if (ok_flag)
    printf("Yes\n");
  else
    printf("No\n");
}
