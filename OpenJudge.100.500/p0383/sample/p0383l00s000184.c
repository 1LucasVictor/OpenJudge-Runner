#include <stdio.h>
int main(){

  int n,m,l,front[100][100],back[100][100],x[100][100]={0},i,j,k;

  //scan figure
  scanf("%d %d %d",&n,&m,&l);

  //scan matrix
  for(i = 0; i < n; i++){
    
    for(j = 0; j < m; j++){
      
      scanf("%d",&front[i][j]);
      
    }
    
  }
  
  for(i = 0; i < m; i++){
    
    for(j = 0; j < l; j++){
      
      scanf("%d",&back[i][j]);
      
    }

  }

  //calculate and print
  
  for(i = 0; i < n; i++){
    
    for(j = 0; j < l; j++){
      
      for(k = 0; k < m; k++){
	
	x[i][j] += front[i][k]*back[k][j];
	
      }

      if (j == l-1){

      printf("%d",x[i][j]);	
      
      } else {

	printf("%d ",x[i][j]);

      }
      
    }

    printf("\n");
    
  }

  return 0;
  
}