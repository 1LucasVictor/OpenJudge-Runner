#include<stdio.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define N 100
#define IN (1<<21)
#define O 0
#define I 1

int prim(void);

int n,A[N][N];

int main(){
  int i,j,s;
  scanf("%d",&n);
  for(i=O;i<n;i++){
    for(j=O;j<n;j++){
      scanf("%d",&s);
      A[i][j]=(s==-I) ? IN:s;
    }
  }
  printf("%d\n",prim());
  return 0;
}

int prim(){
  int i,u,v,m,a=O,d[N],pi[N],color[N];

  for(i=O;i<n;i++){
    d[i]=IN;
    pi[i]=-I;
    color[i]=WHITE;
  }
  d[O]=O;

  while(I){
    m=IN;
    u=-I;
    for(i=O;i<n;i++){
      if(m>d[i] && color[i]!=BLACK){
        u=i;
        m=d[i];
      }
    }
    if(u==-I){
      break;
    }
    color[u]=BLACK;
    for(v=O;v<n;v++){
      if(color[v]!=BLACK && A[u][v]!=IN){
        if(d[v]>A[u][v]){
          d[v]=A[u][v];
          pi[v]=u;
          color[v]=GRAY;
        }
      }
    }
  }
  for(i=O;i<n;i++){
    if(pi[i]!=-I){
      a+=A[i][pi[i]];
    }
  }
  return a;
}


