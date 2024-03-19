#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int max, sum, n, i;
  int *num;

  scanf("%d", &n);

  while(n != 0){
    num = malloc(sizeof(int)*n);
    scanf("%d", &num[0]);
    sum = max = num[0];
    for(i = 1; i < n; i++){
      scanf("%d", &num[i]);
      if(max < num[i]) max = num[i];
      sum += num[i];
      if(max < sum) max = sum;
      if(sum < 0) sum = 0;
    }
    printf("%d\n", max);
    free(num);
    scanf("%d", &n);
  }
  return 0;
}