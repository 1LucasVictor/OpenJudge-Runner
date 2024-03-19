#include <stdio.h>

int main(){

  int i,j,n,u,k,l,v[100],res[100][100] = {0};
  //入力
  scanf("%d",&n);
  for (i = 0;i < n;i++){
    scanf("%d%d",&u,&k); 
    for ( j = 0; j < k; j++){
      scanf("%d",&v[j]);	
      res[i][v[j]-1] = 1; 
    }
  
  }

 
  

  //出力
  for (i = 0;i < n;i++){ 
    for (j = 0;j < n;j++){
      printf("%d",res[i][j]); 
      if (j == n-1){
	printf("\n");
      }
      else{
	printf(" ");
      }
    
    }

  
  }
  return 0;
}