/* input
5
 -1 2 3 1 -1
 2 -1 -1 4 -1
 3 -1 -1 1 1
 1 4 1 -1 3
 -1 -1 1 3 -1
*/



#include<stdio.h>

#define MAX 100
#define INFTY (1 << 21)

#define WHITE 0
#define GRAY 1
#define BLACK 2

int prim(void);


int n;
int M[100][100];


int main(void){
  int i,j;
  int a;
  
  scanf("%d",&n);

  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++){
      scanf("%d",&a);

      if(a == -1){
	M[i][j] = INFTY;
      } else {
	M[i][j] = a;
      }

    }
  }

  printf("%d",prim());
  puts("");

  return 0;
}




int prim(void){
  int i,v;
  int u,mincost;
  int d[MAX],p[MAX];
  int color[MAX];
  int sum = 0;

  for(i = 0;i < n;i++){
    d[i] = INFTY;
    p[i] = -1;
    color[i] = WHITE;
  }

  d[0] = 0;

  while(1){
    mincost = INFTY;
    u = -1;
    
    for(i = 0;i < n;i++){
      if(d[i] < mincost && color[i] != BLACK){
	u = i;
	mincost = d[i];
      }
    }

    if(u == -1){
      break;
    }
    color[u] = BLACK;
    
    for(v = 0;v < n;v++){
      if(color[v] != BLACK && M[u][v] != INFTY){
	if(M[u][v] < d[v]){
	  d[v] = M[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
      
    }
  }

  for(i = 0;i < n;i++){
    if(p[i] != -1){
      sum += M[i][p[i]];
    }
  }
  
  return sum;
}

