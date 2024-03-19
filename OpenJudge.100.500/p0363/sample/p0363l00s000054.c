#include <stdio.h>
#define DIM 3

void swap(int* data1, int* data2);
void selection_sort(int* data, int dim);

int main(int argc, char *argv[]){
  int data[DIM];
  scanf("%d %d %d", &data[0], &data[1], &data[2]);
  selection_sort( data, DIM );
  printf("%d %d %d\n", data[0], data[1], data[2]);
  return(0);
}

void swap(int* data1, int* data2){
  int tmp;
  tmp=*data1;
  *data1=*data2;
  *data2=tmp;
}
void selection_sort(int* data, int dim){
  int i,j;
  int min_index;
  for(i=0; i<dim; i++){
    min_index=i;
    for(j=i+1; j<dim; j++){
      if( data[j] < data[min_index] )
	min_index=j;
      else
	;
    }
    swap( &data[i], &data[min_index] );
  }
}

