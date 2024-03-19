#include <stdio.h>
#include <stdlib.h>

int *array;

int fibonacci(int);

int main(){
  int n;
  int i;
  int answer;

  scanf("%d",&n);
  array = malloc((n+1) * sizeof(int));

  for(i=0;i<n+1;i++) array[i] = -1;

  answer = fibonacci(n);

  printf("%d\n",answer);

  free(array);
  return 0;
}

int fibonacci(int n){
  if(n == 0 || n == 1){
    array[n] = 1;
    return array[n];
  }

  if(array[n] != -1) return array[n];

  array[n] = fibonacci(n-2) +  fibonacci(n-1);

  return array[n];
}