#include <stdio.h>

int main(void){
  int i,j,n;
  int sum = 0,flag = 1;
  int array[10000];

  scanf("%d",&n);

  for( i = 0 ; i < n ; i++ ){
    scanf("%d",&array[i]);
  }

  for( i = 0 ; i < n ; i++ ){
    flag = 1;
    for( j = 2 ; j <= array[i]/2 ; j++ ){
      if( (array[i] % j) == 0 ){
        flag = 0;
        break;
      }
    }
    if( flag == 1 ) sum++;
  }
  printf("%d\n",sum);
}