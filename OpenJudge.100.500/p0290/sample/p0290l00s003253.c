#include <stdio.h>
#include <stdlib.h>

int main(){
  int num;
  int i,j;
  int *array;
  int count = 0;

  while(1){
  scanf("%d",&num);
  if(num >= 1 && num <= 10000)
    break;
  }

  array = (int *)malloc(sizeof(int)*num);

  count = num;

  for(i = 0;i < num;i++){
    while(1){
    scanf("%d",&array[i]);
    if(array[i]>=2 && array[i]<=100000000)
      break;
    }
  }

  for(i = 0;i < num;i++){
    for(j = 2;j < array[i];i++){
      if(array[i] % j == 0){
	count = count - 1;
	break;
      }
    }
  }

  printf("%d\n",count);
  
  free(array);
  
  return 0;
}

