#include <stdio.h>
#include <stdlib.h>

int main(){
  int N,i,j,Max=0;
  int *array;

  scanf("%d",&N);
  array=malloc(sizeof(int)*N);

  for(i=0;i<N;i++)scanf("%d",&array[i]);
  Max=array[1]-array[0];
  for(i=0;i<N;i++){
    for(j=i+1;j<N;j++){
      if(array[j]-array[i]>Max)Max=array[j]-array[i];
    }
  }
  printf("%d\n",Max);

  return 0;
}