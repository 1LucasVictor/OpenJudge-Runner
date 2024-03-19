#include<stdio.h>
#define W 0 //?????¢?´¢
#define G 1 //??¢?´¢???
#define B 2 //??¢?´¢??????
#define INF 100000000
#define N 100

void BFS(int);
void enqueue(int);
int dequeue(void);

int color[N],d[N],A[N][N],f[N],Q[N],head,tail,n;

int main(){
  int i,j,k;

  scanf("%d",&n);

  head = 0;
  tail = 1;

  for(i=0 ; i<n ; i++){
    scanf("%d",&k);
    scanf("%d",&f[k]);
    for(j=0 ; j<f[k] ; j++){
      scanf("%d",&A[k][j]);
    }
  }

  BFS(1);

  for(i=1 ; i<=n ; i++){
    if(d[i]==INF)d[i] = B;
    printf("%d %d\n",i,d[i]);
  }

  return 0;
}

void BFS(int a){

  int i,v,j;
  for(j=1 ; j<=n ; j++){
    color[j] = W;
    d[j] = INF;
  }
  color[j] = G;
  d[a] = 0;
  enqueue(a);

  while(head != tail){
    j = dequeue();
    for(i=0 ; i<f[j] ; i++){

      v = A[j][i];
      if(color[v] == W){
	color[v] = G;
	d[v] = d[j] + 1;
	enqueue(v);
      }
      color[j] = B;
    }
  }
}

void enqueue(int z){
  Q[tail] = z;
  if(tail + 1 == n)tail = 0; //?????£???
  else tail++;
}

int dequeue(void){
  int z;
  z = Q[head];
  if(head +1 == n)head = 0; //?????£???
  else head++;
  return z;
}