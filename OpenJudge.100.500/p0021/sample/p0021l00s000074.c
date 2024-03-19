#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  long int max, sum;
  int n, i;
  long int *num;

  scanf("%d", &n);

  while(n != 0){
    num = malloc(sizeof(long int)*n);
    scanf("%ld", &num[0]);
    sum = max = num[0];
    for(i = 1; i < n; i++){
      scanf("%ld", &num[i]);
      sum += num[i];
      if(sum < 0) sum = 0;
      if(max < sum) max = sum;
    }
    printf("%ld\n", max);
    free(num);
    scanf("%d", &n);
  }
  return 0;
}