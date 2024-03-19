#include <stdio.h>
#include <stdlib.h>

typedef struct Input{
  int u;
  int k;
  int v[1000];
}input;

int main(void){
  int n,i,j,G[100][100];
  input Adj[100];

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    scanf("%d",&Adj[i].u);
    scanf("%d",&Adj[i].k);

    if(Adj[i].k != 0){
      for(j = 0 ; j < Adj[i].k ; j++){
	scanf("%d",&Adj[i].v[j]);
      }
    }
    
  }

  for(i = 0 ; i < n ; i++){
    
    if(Adj[i].k!=0){
      for(j = 0 ; j < n ; j++){
	
	if(Adj[i].u == Adj[i].v[j]){
	  G[Adj[i].u-1][Adj[i].v[j]-1] = 0;
	  }
	
	else {
	  G[Adj[i].u-1][Adj[i].v[j]-1] = 1;
	}
      }
      
    }
  }


  for(i = 0 ; i < n ; i++){
    for(j = 0 ; j < n ; j++){
      printf("%d",G[i][j]);
      if(j < n-1){
	printf(" ");
      }
    }
    printf("\n");
  }

  /*
  for(i = 0 ; i < n ; i++){
    printf("%d %d",Adj[i].u,Adj[i].k);
    for(j = 0 ; j < Adj[i].k ; j++){
      printf(" %d",Adj[i].v[j]);
    }
    printf("\n");
  }
  */
}