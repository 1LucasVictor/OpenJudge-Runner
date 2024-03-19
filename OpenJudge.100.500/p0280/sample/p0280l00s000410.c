#include <stdio.h>
 
#define  N    100
#define INF   100000
#define NIL   -1
#define WHITE 1
#define BLACK 0
 
int A[N][N];
int n;


void prim(void){

 int i, u, v, min;
 int ans = 0;
 int color[N], pi[N], d[N];
	
 for(u = 0; u < n; u++){
			d[u] = INF;
		 pi[u] = NIL;
	color[u] = WHITE;
 }
	
 d[0] = 0;

 while(1){

 min = INF;

 for(i = 0;i < n;i++){
	 if(color[i] != BLACK && d[i] < min){
	 min = d[i];
	 u = i;
	 }
	}
	 if(min == INF) break;
	 color[u] = BLACK;
	
 for(v = 0; v<n; v++){
	 if(color[v] != BLACK && A[u][v] < d[v] && A[u][v] != -1){
		pi[v] = u;
		d[v] = A[u][v];
	 }
	}
 }

 for(i=0; i < n;i++){
	ans += d[i];
	}

 printf("%d\n",ans);
	
}



 
int main(){
 
  int i;
  int j;
   
  scanf("%d",&n);
 
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
  scanf("%d",&A[i][j]);
    }
  }
 
  prim();
 
  return 0;
}