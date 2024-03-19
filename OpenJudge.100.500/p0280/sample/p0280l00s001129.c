#include<stdio.h>
#define MAX 101
#define INF 5000000
#define WHITE 0
#define GRAY 1
#define BLACK 2


int n,m[MAX][MAX];

int prim(){
  int u,minv,i,v;
int d[MAX],p[MAX],color[MAX];
 int sum;
for(i = 0;i<n;i++){
  d[i] = INF;
  p[i] = -1;
  color[i] = WHITE;
 }
d[0] = WHITE;

while(1){
  minv = INF;
  u = -1;
  for(i = 0;i<n;i++){
    if(minv > d[i] && color[i] != BLACK){
      u = i;
      minv = d[i];
    }
  }
  if(u == -1)break;
  color[u] = BLACK;

  for(v= 0;v<n;v++){
    if(color[v] != BLACK && m[u][v] != INF){
      if(d[v] > m[u][v]){
	d[v] = m[u][v];
	p[v] = u;
	color[v] = GRAY;
      }
      
    }
  }
 }
 sum = 0;
 for(i = 0;i<n;i++){
   if(p[i] != -1){
     sum += m[i][p[i]];
   }
 }
 return sum;
}
int main(){
  int i,j;

  scanf("%d",&n);

  for(i = 0;i<n;i++){
    for(j = 0;j<n;j++){
      scanf("%d",&m[i][j]);
    }
  }
  for(i = 0;i<n;i++){
    for(j = 0;j<n;j++){
      if(m[i][j] <= -1)m[i][j]=INF;
    }
  }
  printf("%d\n", prim());
  return 0;
}

