#include <stdio.h>

#define WHITE 0
#define BLACK 2
#define GRAY 1
#define INF 1000000
int color[100];
int M[100][100];
int d[100];
int p[100];
int n;
void prim(){
  int u,minv,total;
  int i;
  
for(i=0;i<n;i++){
  color[i] = WHITE;
  d[i] = INF;
  p[i] =- 1;
 }
d[0] = 0;
while(1){
  minv = INF;
  u = -1;
  for(i=0;i<n;i++){
    if(minv > d[i] && color[i] != BLACK){
      u = i;
      minv = d[i];
    }
  }
  if(u == -1) break;
  color[u] = BLACK;
  for(i=0;i<n;i++){
    if(color[i] != BLACK && M[u][i] != INF){
      if(d[i] > M[u][i]){
        d[i] = M[u][i];
        p[i] = u;
        color[i] = GRAY;
      }
    }
  }
 }
total = 0;
for(i=0;i<n;i++){
  if(p[i] != -1)
    total += M[i][p[i]];
 }
printf("%d\n",total);
}

int main(int argc, char const *argv[]) {
  int i,j,s;
  scanf("%d",&n);
  for(i=0;i<n;i++) {
    for(j=0;j<n;j++){
      scanf("%d",&s);
      M[i][j]=(s == -1)? INF:s;
    }
  }
  prim();
  return 0;
}
