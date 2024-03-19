/* A Minimum Spanning Tree */
#include<stdio.h>
#define INF 100000

int G[101][101]; /* 1 <= n <= 100 */
int key[101]; /* take minimum cost */
int pi[101];  /* */


int main(){
  int i,j;
  int n;
  int result=0;
  int temp;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&G[i][j]);
    }
  }

  /* initialize key[] and pi[]*/
  for(i=1;i<=n;i++){
    key[i]=INF;
    pi[i]=1;
  }
  key[1]=0;

  /* root is 1. */
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(G[i][j]!=-1){
	if(G[i][j]<key[j]){
	  if(pi[j]==1){
	    key[j]=G[i][j]; 
	    temp=j;
	  } 
	}
      }
    }
    pi[temp]=0;
  }

  for(i=1;i<=n;i++){
    result+=key[i];
  }

  printf("%d\n",result);

  return 0;
}