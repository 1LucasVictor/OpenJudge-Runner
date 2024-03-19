#include<stdio.h>
#define N 100
#define W 0
#define G 1
#define B 2
#define INF 99999

int A[N][N],color[N],d[N],p[N];
int n,time = 0;

void prim(){
  int i,min,u,v;
  for(i = 0; i < n; i++){
    color[i] = W;
    d[i] = INF;
    p[i] = -1;
  }
  d[0] = 0;

  while(1){
    min = INF;
    u = -1;
    for(i = 0; i < n; i++){
      if(color[i] != B && d[i] < min){
	min = d[i];
	u = i;
      }
    }
    if(u == -1) break;
    color[u] = B;

    for(v = 0; v < n; v++){
      if(color[v] != B && A[u][v] != INF){
	if(A[u][v] < d[v]){
	  d[v] = A[u][v];
	  p[v] = u;
	  color[v] = G;
	}
      }
    }
  }
}


int main(){
  int i,j,a,sum = 0;
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      A[i][j] = 0;
    }
  }
  
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
       scanf("%d",&a);
         if(a == -1) A[i][j] = INF;
         else A[i][j] = a;
    }
  }
  
  prim();
  for(i = 0; i < n; i++){
    if(p[i] != INF) sum += A[i][p[i]];
  }
  printf("%d\n",sum);
 
 
  
  return 0;
}

