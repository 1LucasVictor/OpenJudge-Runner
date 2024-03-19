#include<stdio.h>
#include <math.h>

int MAX = 100;
int INFTY = 999999;
int WHITE = 0;
int GRAY = 1;
int BLACK = 2;

int n;
int M[100][100];

int prim(int n) {

  int u, minv;
  int d[MAX], p[MAX], color [MAX];

  int i,v;

  int sum = 0;

  d[0]=0;
  
  for (i = 0; i <n; i++ ) {

    if(i!=0) d[i] = INFTY;
    p[i] = -1;
    color[i] = WHITE;

  }
  
  while ( 1< 2 ) {

    minv = INFTY;

    u = -1;

    for ( i = 0; i < n; i++ ) {
      if ( color[i] != BLACK && minv > d[i]  ) {

	u = i;
	minv = d[i];
      }
    }
    
    if ( u == -1 ) break;
    
    color[u] = BLACK;
    
    for ( v = 0; v < n; v++ ) {
      if ( color[v] != BLACK && M[u][v] != INFTY ) {

	if ( d[v] > M[u][v] && u!=-1) {
	 

	  d[v] = M[u][v];
	  p[v] = u;
	  color [v] = GRAY;
	}
      }
    }

    if ( u == -1 ) break;
  }

  for (i = 0; i<n; i++) {
    
    if ( p[i] != -1 ) sum = sum + M[i][p[i]];

  }
  
  return sum;
}


int main() {

  scanf("%d",&n);

  int i,j;

  int e;
  
  for (i = 0; i < n; i++ ) {

    for (j = 0; j<n; j++ ) {
  

      scanf("%d",&e);

      if(e==-1){

	M[i][j]=INFTY;
      }
      else{

	M[i][j]=e;
      }
      
      
    }
  }
  
  printf("%d\n",prim(n));

  return 0;
}

