#include <stdio.h>

#define NMAX 101
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,M[NMAX][NMAX];

int prim(void){
  int i,j,u,minv;
  static int sum = 0;
  int d[NMAX],p[NMAX],color[NMAX];

  for(i = 0;i < n;i++){
    d[i] = (1<<21);
    p[i] = -1;
    color[i] = WHITE;
  }

  d[0] = 0;

  while(1){
    minv = (1<<21);
    u = -1;
    for(i = 0;i < n;i++){
      if(minv > d[i] && color[i] != BLACK){
	u = i;
	minv = d[i];
      }
    }
    if(u == -1){
      break;
    }
    color[u] = BLACK;
    for(j = 0;j < n;j++){
      if((color[j] != BLACK) && (M[u][j] != (1<<21))){
	if(d[j] > M[u][j]){
	  d[j] = M[u][j];
	  p[j] = u;
	  color[j] = GRAY;
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


int main(void){
  int i,j,e;

  scanf("%d",&n);

  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++){
      scanf("%d",&e);
      if(e == -1){
	M[i][j] = (1<<21);
      }else{
	M[i][j] = e;
      }
    }
  }

  printf("%d\n",prim());

  return 0;
}

	    

