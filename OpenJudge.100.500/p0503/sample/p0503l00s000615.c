#include<stdio.h>
#include<stdlib.h>
int int_sort(const void *,const void *);
int main(void){
  
  int N,a[200001],i,j,w;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
  }

  qsort(( void * )a , N , sizeof( int )
                       , int_sort );
 
  for(i=0;i<N-1;i++){
    if(a[i]==a[i+1]){
      printf("NO\n");
      return 0;
    }
  }
 printf("YES\n");
}



int_sort( const void * a , const void * b ) {
  /* 引数はvoid*型と規定されているのでint型にcastする */
  if( *( int * )a < *( int * )b ) {
    return -1;
  }
  else
  if( *( int * )a == *( int * )b ) {
    return 0;
  }
  return 1;
}