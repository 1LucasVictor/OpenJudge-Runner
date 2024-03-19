#include<stdio.h>

#define NIL -1
#define A 101
#define N 2000

void MSTPrim();

static const int MAX=500;
static const int INFTY=(1<<21);

int key[A], M[A][A], p[A], n, sum;

int main(){
  int i, j, e;
  scanf("%d", &n);
  for (i=0; i<n; i++ ){
    for (j=0; j<n; j++ ){
      scanf("%d", &e);
      M[i][j]=(e==-1)?INFTY:e;
    }
  }
  sum=0;
  MSTPrim();
  printf("%d\n", sum);
  return 0;
}

void MSTPrim(){
  int i, v, u;

  for(u=0;u<n;u++){
    key[u]=INFTY;
    p[u]=NIL;
  }

  key[0]=0;

  while(1){
    int minv=INFTY;
    u=NIL;

    for(i=0;i<n;i++){
      if(key[i] < minv && p[i]==NIL ){
	u=i;
	minv=key[i];
      }
    }
    if(u==NIL) break;
    p[u]=1;
    sum+=key[u];
    for(v=0;v<n;v++){
      if(M[u][v]<key[v]){
	key[v]=M[u][v];
      }
    }
  }
}