#include <stdio.h>
#include <stdlib.h>
int main(){
  int *input, i, j, n, max;
  scanf("%d",&n);
  input = (int *)malloc(sizeof(int) * n);
  for(i=0; i<n; i++){
    scanf("%d",&input[i]);
    if(i == 0)
      continue;
    if(i == 1){
      max = input[1] - input[0];
      continue;
    }
    for(j=0; j<i; j++){
      if(input[i]-input[j] > max)
	max = input[i]-input[j];
    }
  }
  free(input);
  printf("%d\n",max);
  return 0;
}