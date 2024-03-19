#include <stdio.h>

#define MAX 100

int main(){

  int i, j, v, num;
  int data[MAX];

  for(i = 0; i< MAX; i++) data[i] = 0;
 
  scanf("%d", &num);

  for(i = 0; i < num; i++){

    scanf("%d",&data[i]);

  }

  for(i = 1; i < num; i++){

    j = 0;
 
    while(data[j] != 0){

      printf("%d ", data[j]);

      j++;

    }

    printf("\n");


    v = data[i];
    
    j = i - 1;

    while((j >= 0) && (data[j] > v)){

      data[j + 1] = data[j];

      j--;

      data[j + 1] =v;

    }

  }

  j = 0;

  while(data[j] != 0){

    printf("%d ", data[j]);

    j++;

  }

  printf("\n");

  return 0;
}