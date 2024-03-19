#include <stdio.h>
#include <stdlib.h>

int main(void){

  int a, *num;
  int i=0;
  long Max=-1000000, min=1000000, sum=0;

  scanf("%d", &a);

  num = (int *)malloc(a * sizeof(int));

  while(i<a){
    scanf("%d", &num[i]);
    sum += num[i];
    if(Max <= num[i])
      Max = num[i];
    if(min >= num[i])
      min = num[i];
    i++;
  }

  printf("%ld %ld %ld\n", min, Max, sum);
  free(num);
  return 0;
}

