#include<stdio.h>
#define Max  100
#define inf (1<<21)
#define W 0
#define G  1
#define B 2

int n,M[Max][Max];

int prim(){
  int i,u,minv,v;
  int d[Max],p[Max],col[Max];

  for(i=0;i<n;i++){
    d[i]=inf;
    p[i]= -1;
    col[i] = W;
  }

  d[0] = 0;

  while(1){
    minv = inf;
    u = -1;
    for(i=0;i<n;i++){
      if(minv > d[i] && col[i] != B){
        u =i;
        minv = d[i];
      }
    }
    if(u == -1)break;
    col[u] = B;
    for(v = 0;v < n; v++){
      if(col[v] != B && M[u][v] != inf){
        if(d[v]>M[u][v]){
          d[v] = M[u][v];
          p[v] = u;
          col[v]=G;
        }
      }
    }
  }
int sum = 0;
  for(i = 0;i<n;i++){
    if(p[i] != -1)sum+=M[i][p[i]];
  }

  return sum;
}

int main(){
  int i,j,e;
  scanf("%d",&n);

  for(i = 0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      M[i][j] = (e == -1) ? inf : e;
    }
  }

  printf("%d\n",prim());

  return 0;
}

