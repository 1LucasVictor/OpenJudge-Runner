#include<stdio.h>
#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INF (1<<21)

typedef struct
{
  int d,color;
}G;

int n,M[N][N];
G B[N];

void SSSP();

int main()
{
  int i,j,u,k,v,c;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++)M[i][j] = INF;
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      M[u][v] = c;
    }
  }

SSSP();

  return 0;
}

void SSSP()
{
  int min,i,j,u;

  for(i=0;i<n;i++){
    B[i].d = INF;
    B[i].color = WHITE;
  }

  B[0].d = 0;
  B[0].color = GRAY;

  while(1){
    min = INF;
    u = -1;

    for(i=0;i<n;i++){
      if(min > B[i].d && B[i].color != BLACK){
        u = i;
        min = B[i].d;
      }
    }

    if(u == -1)break;
    B[u].color = BLACK;

    for(i=0;i<n;i++){
      if(B[i].color != BLACK && M[u][i] != INF){
        if(B[i].d > B[u].d + M[u][i]){
          B[i].d  = B[u].d + M[u][i];
          B[i].color = GRAY;
        }
      }
    }
  }

  for(i=0;i<n;i++){
    printf("%d %d\n",i,B[i].d);
  }

}

