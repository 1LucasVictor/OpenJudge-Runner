#include<stdio.h>
int N = 100;

int main(){
  int i, j, n, u, k, v;
  int A[N][N];

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    for(j = 0;j < n; j++){
      A[i][j] = 0;
    }
  }

  for(i = 0; i < n; i++){
    scanf("%d", &u);
    scanf("%d", &k);
    //u--;
    
    for(j = 0; j < k; j++){
      scanf("%d",&v);
      //v--;
      A[u-1][v-1] = 1;
    }
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if(j != 0){
	printf(" ");
      }
      
      printf("%d" , A[i][j]);
    }
    
    printf("\n");
  }
  
  return 0;
}

