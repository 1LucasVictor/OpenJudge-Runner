#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrimeNum( int x )
{
    int i;

    for( i = 2; i <= sqrt((double)x); i++ )
        if( x % i == 0 ) return 0;
    return 1;
}

int main(){
  int num;
  int i,j;
  int *array;
  int count = 0;

  do{
  scanf("%d",&num);
  }while(num < 1 || num > 10000);

  array = (int *)malloc(sizeof(int)*num);

  for(i = 0;i < num;i++){
    do{
    scanf("%d",&array[i]);
    }while(array[i]<2 || array[i]>100000000);
  }

  for(i = 0;i < num;i++) {
        if( isPrimeNum( array[i] ) ) {
	  count++;
        }
    }

  printf("%d\n",count);
  
  free(array);
  
  return 0;
}
