#include<stdio.h>
#define INFTY (1 << 21)
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n;
int M[100][100];

int Prim();

int main(){
  int i, j, a;
  int P;

  scanf("%d",&n);
for(i=0;i<n;i++)

  for(i = 0 ; i < n ; i++){
    for(j = 0 ; j < n ; j++){
      scanf("%d",&a);
      M[i][j] = a;
      if(M[i][j] == -1) M[i][j] = INFTY;
    }
  }

  P = Prim();
  printf("%d\n",P);

  return 0;
}

int Prim(){
  int i, u, min;
  int d[100], p[100], color[100];
  int sum = 0;

  for(i = 0 ; i < n ; i++){
    d[i] = INFTY;
    p[i] = -1;
    color[i] = WHITE;
  }

  d[0] = 0;

  while(1){
    min = INFTY;
    u = -1;
    for(i = 0 ; i < n ; i++){
      if(min > d[i] && color[i] != BLACK){
 u = i;
 min = d[i];
      }
    }

    if(u == -1) break;

    color[u] = BLACK;
    for(i = 0 ; i < n ; i++){
      if(color[i] != BLACK && M[u][i] != INFTY){
 if(d[i] > M[u][i]){
   d[i] = M[u][i];
   p[i] = u;
   color[i] = GRAY;
 }
      }
    }
  }

  for(i = 0 ; i < n ; i++){
    if(p[i] != -1) sum += M[i][p[i]];
  }

  return sum;
}

