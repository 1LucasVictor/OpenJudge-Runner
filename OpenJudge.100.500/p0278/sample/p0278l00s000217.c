#include <stdio.h>
#define SIZE 100
#define INF 100000000

int q[SIZE];
int head=0,tail=1,n,M[SIZE][SIZE];
int d[SIZE]; //?????¢??§????¨??????¶?????????????????????

void enqueue(int x){ //?????\??????????£?
  q[tail++]=x;
}

int dequeue(){
  int x=q[head++];
  return x;
}

int isEmpty(){
  return (head==tail);
}

void bfs(int s){
  int i,j;
  int u,k,v;
  int deq;

  enqueue(s); //?????\????????¶?????????(push)
  for(i=0;i<n;i++){
    d[i]=INF;
  }
  d[s]=0;

  while(!isEmpty()){ //?????\????????????????????§?????????
    deq=dequeue();
    for(v=0;v<n;v++){
    if(M[deq][v]==0) continue;
    if(d[v]!=INF) continue;
    d[v]=d[deq]+1;
    enqueue(v);
  }
}
for(i=0;i<n;i++){
  printf("%d ",i+1);
  if(d[i]==INF) printf("-1\n");
  else printf("%d\n",d[i]);
  }
}

int main(){
  int u,k,v;
  int i,j;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j]=0;
    }
}
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    u--;
    for(j=0;j<k;j++){
      scanf("%d",&v);
      v--;
      M[u][v]=1;
    }
  }
  bfs(0);

  return 0;
}