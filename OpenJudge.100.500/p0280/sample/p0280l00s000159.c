#include <stdio.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define N 100000
#define MAX 100

int prim(void);

int A[MAX][MAX]={0},color[MAX],d[MAX],p[MAX];
int a,i,j,n,m,min;

int main(){
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
      if(A[i][j] == -1){
	A[i][j] = N;
      }
      
    }
  } 
  printf("%d\n",prim());
  
  return 0;
}


int prim(){
  int i,m,y=0,k;
  
  for(i=0;i<n;i++){
    color[i] = WHITE;
    p[i] = -1;
    d[i] = N;
  }
  d[0] = 0;
  
  while(1){
    min = N;
    m = -1;
    for(i=0;i<n;i++){
      if(min > d[i] && color[i] != BLACK){
	m = i;
	min = d[i];
      }
    }
    if(m == -1) break;
    color[m] = BLACK;

    for(k=0;k<n;k++){
      if(color[k] != BLACK && A[m][k] != N){
	if(d[k] > A[m][k]){
	  d[k] = A[m][k];
	  p[k] = m;
	  color[k] = GRAY;
	}
      }
    }
    
  }

  for(i=0;i<n;i++){
    if(p[i] != -1){
      y += A[i][p[i]];
    } 
  }
  return y;  
}

