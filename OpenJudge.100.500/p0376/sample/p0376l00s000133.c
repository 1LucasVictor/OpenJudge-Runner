#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int i;
  int dim;
  int *data;
  //get data
  scanf("%d", &dim);
  data=(int *)malloc(sizeof(int)*dim);
  for(i=0; i<dim; i++){
    scanf("%d", &data[i]);
  }
  //reverse
  for(i=dim-1; i>0; i--){
    printf("%d ", data[i]);
  }
  printf("%d\n", data[i]);
  return(0);
}
