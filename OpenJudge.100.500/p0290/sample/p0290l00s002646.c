#include <stdio.h>
#include <stdlib.h>

int main(){
  int num;
  int i,j;
  int *array;
  int count = 0;

  scanf("%d",&num);

  array = (int *)malloc(sizeof(int)*num);

  count = num;

  for(i = 0;i < num;i++){
    scanf("%d",&array[i]);
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

