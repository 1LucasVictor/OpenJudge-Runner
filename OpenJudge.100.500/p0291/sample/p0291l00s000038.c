#include <stdio.h>

int main()
{
  int n, i, j;
  int max = -1000000000;
  int r[200000];

  scanf("%d", &n);

  for(i = 0; i < n; i++)
    scanf("%d", &r[i]);

  for(i = 0; i < n-1; i++){
    for(j = i+1; j < n; j++){
      if(r[j]-r[i] > max)
        max = r[j] - r[i];
    }
  }
  printf("%d\n", max);

  return 0;
}