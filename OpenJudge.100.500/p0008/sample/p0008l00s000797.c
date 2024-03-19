#include <stdio.h>

int set[30], n[30];

int main(void)
{
  int i = 0, j, w, jg = 0;

  while (scanf("%d", &n[i]) != EOF){
    for (j = 1; j <= n[i]; j++){
      for (w = 2; w <= n[i]; w++){
        if (j % w == 0){
          jg++;
        }
      }
      if (jg == 1){
        set[i] += jg;
      }
      jg = 0;
    }
    i++;
  }

  for (j = 0; j < i; j++){
    printf("%d\n", set[j]);
  }

  return (0);
}