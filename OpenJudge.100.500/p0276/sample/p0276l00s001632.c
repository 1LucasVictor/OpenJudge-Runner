#include<stdio.h>

#define N 100

int main(){

  int i,j,n,k[N],v[N][N],a;



  for(i = 0 ; i < N ; i++){
    for(j = 0 ; j < N ; j++){
      v[i][j] = 0;
    }
  }
  
  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    scanf("%d%d",&a,&k[i]);
    for(j = 0 ; j < k[i] ; j++){
      scanf("%d",&v[a-1][j]);
    }
  }

  for(i = 0 ; i < n ; i++){
    a = 0;
    for(j = 0 ; j < n ; j++){
      if(v[i][a] == j+1){
	printf("1");
	a++;
      }
      else printf("0");
      
      if(j != n-1) printf(" ");
    }
    printf("\n");
  }

  return 0;
}