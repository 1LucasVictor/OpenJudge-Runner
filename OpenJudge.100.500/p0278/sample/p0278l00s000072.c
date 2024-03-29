#include <stdio.h>
#define WHITE 1
#define GRAY 0
#define BLACK -1
#define INF 100000000
#define N 100
 
void bfs(int);
void enqueue(int);
int dequeue(void);
 
int Q[N+1],d[N+1],c[N+1],ts,n,S[N+1][N+1],K[N+1];
int head, tail;
 
int main()
{
  int i,j,u,min;
 
  scanf("%d",&n);
 
  head = 0;
  tail = 1;
 
  for(i=0;i<n;i++){
    scanf("%d",&u);
    scanf("%d",&K[u]);
 
    for(j=0;j<K[u];j++){
      scanf("%d",&S[u][j]);
    }
  }
 
  bfs(1);
  for(i=1;i<=n;i++)  {
    if(d[i]==INF) d[i]=-1;
    printf("%d %d\n",i,d[i]);
  }
 
  return 0;
}
 
void bfs(int s){
  int i,u,v;
  for (u=1;u<=n;u++){
    c[u] = WHITE;
    d[u] = INF;
  }
  c[s] = GRAY;
  d[s] = 0;
 
  enqueue(s);
 
  while(head!=tail){
    u = dequeue();
    for(i=0;i<K[u];i++){
      v=S[u][i];
      if (c[v] == WHITE){
    c[v] = GRAY;
    d[v] = d[u] + 1;
    enqueue(v);
      }
      c[u] = BLACK;
    }
  }
}
 
void enqueue(int x){
  Q[tail] = x;
  if (tail + 1 == n) tail = 0;
  else tail++;
}
 
int dequeue(void){ 
  int x;
  x = Q[head];
  if (head + 1 == n) head = 0;
  else head++;
  return x;
}