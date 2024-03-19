#include<stdio.h>
#define N 100

int main(){

  int G[N][N],i,j,n,a,b,c;

  scanf("%d",&n);
  
  for( i= 0 ; i < n ; i++ ){
    for( j =0 ; j < n ; j++ ){
      G[i][j] = 0;
    }
  }
  
  for( i = 0 ; i < n ; i++ ){
    scanf("%d%d",&a,&b);
    for( j = 0 ; j < b ; j++ ){
      scanf("%d",&c);
      G[a-1][c-1] = 1;
    }
  }
  
  for( i = 0 ; i < n ; i++ ){
    for( j = 0 ; j < n ; j++ ){
      printf("%d", G[i][j]);
      if( j < n-1 ){
	printf(" ");
      }
    }
    
    printf("\n");
    
  }
  
  return 0;
}