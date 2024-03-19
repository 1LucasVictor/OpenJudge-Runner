#include <stdio.h>
#include <stdlib.h>

int main(void){
  int array[3];
  int temp;
  scanf("%d %d %d", &array[0], &array[1], &array[2]);
  for(int i = 0; i < 3; i++){
    for(int j = i + 1; j < 3; j++){
      if(array[i] < array[j]){
	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
      }
    }
  }

  if(array[0] == 7 && array[1] == 5 && array[2] == 5){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}