#include<stdio.h>

void print();

int n,i,j;
int Adj[100][100];

int main() {
  int u,k,v;

  scanf("%d", &n);
  
  for( i = 0 ; i  < n ; i++ ) {
    for( j = 0 ; j < n ; j++ ) {
      Adj[i][j] = 0;
    }
  }
 
  for( i = 0 ;  i < n ; i++ ) {
    scanf("%d%d", &u, &k);
    for( j = 0 ; j < k ; j++ ) {
      scanf("%d", &v);
      Adj[i][v-1] = 1;
    }
    k = 0;
  }

  print();

  return 0;
}

void print() {
  for( i = 0 ; i < n ; i++ ) {
    for( j = 0 ; j < n ; j++ ) {
      printf("%d ",Adj[i][j]);
    }
    if(i != n-1)printf("\n");
  }
}