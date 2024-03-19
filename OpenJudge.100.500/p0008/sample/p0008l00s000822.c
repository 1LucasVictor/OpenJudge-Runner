#include <stdio.h>

int main()
{
  int n;
  const int MAX_N = 999999;
  int a[MAX_N + 1];
  int i, j;
  int cnt;

  for (i = 0; i <= MAX_N; ++i){
    a[i] = 1;
  }

  a[0] = a[1] = 0;

  for (i = 0; i * i <= MAX_N; ++i){
    if (a[i] == 1){
      for (j = 2 * i; j <= MAX_N; j += i){
        a[j] = 0;
      }
    }
  }

  while (scanf("%d", &n) != EOF){
    cnt = 0;
    for (i = 0; i <= n; i++){
      if (a[i] == 1){
        cnt++;
      }
    }

    printf("%d\n", cnt);
  }

  return (0);
}