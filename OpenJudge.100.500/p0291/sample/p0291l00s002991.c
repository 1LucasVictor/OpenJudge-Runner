#include <stdio.h>

int main(){

  int r[2000];
  int n, i, j, max;

  scanf("%d", &n);

  for(i = 0; i < n; i++)
    scanf("%d", &r[i]);

  max = r[1] - r[0];

  for(i = 0; i < n-1; i++){
    for(j = i+1; j < n; j++){
      if(r[j]-r[i] > max)
        max = r[j] - r[i];
    }
  }

  printf("%d\n", max);

  return 0;
}