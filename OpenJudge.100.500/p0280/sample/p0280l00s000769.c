#include<stdio.h>
static int MAX = 100;
static int INFTY = (1<<21);
static int WHITE = 0;
static int GRRAY = 1;
static int BLACK = 2;

int n;
int M[100][100];

int prim(){
  int u,minv,i,v;
  int d[MAX],p[MAX],color[MAX];

  for(i=0;i<n;i++){
    d[i]=INFTY;
    p[i]=-1;
    color[i]=WHITE;
  }

  d[0]=0;

  while(1){
    minv=INFTY;
    u=-1;
    for(i=0;i<n;i++){
      if(minv>d[i] && color[i] != BLACK){
	u=i;
	minv=d[i];
      }
    }
    if(u==-1) break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(M[u][v] != INFTY && color[v] != BLACK){
	if(d[v]>M[u][v]){
	  d[v]=M[u][v];
	  p[v]=u;
	  color[v]=GRRAY;
	}
      }
    }
  }
  int sum=0;
  for(i=0;i<n;i++){
    if(p[i]!=-1) sum+=M[i][p[i]];
  }

  return sum;
}

int main(){
  int i,j,e;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      M[i][j]=(e==-1) ? INFTY :e;
    }
  }
  printf("%d\n",prim());

  return 0;
}

