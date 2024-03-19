#include<stdio.h>

#define MAX 100
#define MIN 1 

int main(){
  int i, j;
  int n, u, k, v;
  int Adj[MAX][MAX];
  
  scanf("%d", &n);
  if(n<=MAX && n>=MIN){
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
	Adj[i][j]=0;
    
    for(i=0;i<n;i++){
      scanf("%d%d", &u, &k);
      for(j=0;j<k;j++){
	scanf("%d", &v);
	Adj[i][v-1]=1;
      }
    }
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
	printf("%d ", Adj[i][j]);
      } printf("\n");
    }
  }  
  return 0;
}
