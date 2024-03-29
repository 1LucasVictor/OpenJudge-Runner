#include<stdio.h>
#define WHITE 0
#define BLACK 2
#define GLAY 1
#define N 102
int g[N][N],d[N],color[N],k[N],Q[N];
int time,n,head=0,tail=0;

void Enqueue(int Q[],int s){
  Q[tail]=s;
  tail++;
}
 
int Dequeue(int Q[]){
  head++;
  return Q[head-1];
}
 
 
void BFS(int s){
  int i,u;
  
  for(i = 1;i <=n; i++){
    color[i] = WHITE;
    d[i] = -1;
  }
   color[s]=GLAY;
  d[s]=0;
  Enqueue(Q,s);
   
  while(head!=tail){
    u=Dequeue(Q);
    for(i=1;i<=n;i++){
      if(g[u][i]==1){ 
    if(color[i]==WHITE){
      color[i]=GLAY;
      d[i]=d[u]+1;
      Enqueue(Q,i);
    }
      }
    }
    color[u]=BLACK;
  }
}
 
int main(){
  int i,j,l,u,v;
  scanf("%d",&n);
 
  for(i = 0;i < n; i++){
    scanf("%d",&u);
    scanf("%d",&l);
    for(j = 0;j < l;j++){
      scanf("%d",&v);
      g[u][v] = 1;
    }
  }
 
 
      BFS(1);
    for(i = 1; i <=n;i++){
      printf("%d %d\n", i,d[i]);
    }
    return 0;
  }