#include <stdio.h>

int main()
{
  int stack[101] = {0};
  int ans[101] = {0};
  int n;
  int i = 0, j = 0;

  while (scanf("%d", &n) != EOF) {

    if (n == 0){
      i--;
      ans[j] = stack[i];
      j++;
    }

    else {
      stack[i] = n;
      i++;
    }
  }

  for (i = 0; i < j; i++)
    printf("%d\n", ans[i]);

  return 0;
}