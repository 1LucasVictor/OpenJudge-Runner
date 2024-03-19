#include<stdio.h>
 
#define MAX 100
#define INF 1000000
#define white 0
#define gray 1
#define black 2
 
int n,u,M[MAX][MAX];
 
void dijkstra(void);
 
int main(){
  int i,j,k,v,c;
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      M[i][j] = INF;
 
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      M[u][v] = c;
    }
  }
 
  dijkstra();
 
  return 0;
}
 
void dijkstra(){
  int i,min,d[MAX],color[MAX] = {white};
 
  for(i=0;i<n;i++)
    d[i] = INF;
 
  d[0] = 0;
  color[0] = gray;
 
  while(1){
    min = INF;
    u = -1;
    for(i=0;i<n;i++)
      if(min > d[i] && color[i] != black){
	u = i;
	min = d[i];
      }
    
    if(u == -1)break;
    color[u] = black;
    
    for(i=0;i<n;i++)
      if(color[i] != black && M[u][i] != INF){
	if(d[i] > d[u] + M[u][i]){
	  d[i] = d[u] + M[u][i];
	  color[i] = gray;
	}
      }
  }
  for(i=0;i<n;i++){
    if(d[i] == INF)printf("%d -1\n",i);
    else printf("%d %d\n",i,d[i]);
  }
 
}