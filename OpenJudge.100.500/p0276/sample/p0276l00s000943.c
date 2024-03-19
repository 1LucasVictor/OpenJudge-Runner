#include<stdio.h>
#define N 100

main(){

  int G[N][N],i,j,n,a,b,c;

  for( i= 0 ; i < n ; i++ ){
    for( j =0 ; j < n ; j ++ ){
      G[i][j] = 0;
    }
    }
  
  scanf("%d",&n);
  
  for( i = 0 ; i < n ; i++ ){
    scanf("%d%d",&a,&b);
    for( j = 0 ; j < b ; j++ ){
      scanf("%d",&c);
      G[i][c-1] = 1;
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