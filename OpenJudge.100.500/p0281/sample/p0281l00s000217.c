#include <stdio.h>
#define MAX 100
#define INF 1000000
#define NIL -1

int a[MAX][MAX];
int n;
int d[MAX];
int pi[MAX];

void R(int, int);
void ISS(int);
void D(int);

main(){

  int i, j ,u ,k,v,c;
  scanf("%d",&n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      a[i][j]=-1;
    }
  }

  for(i=0; i<n; i++){
    scanf("%d %d",&u,&k);
    for(j=0; j<k; j++){
      scanf("%d %d",&v,&c);
      a[i][v]=c;
    }
  }

  D(0);
  for(i=0; i<n; i++){
    printf("%d %d\n", i, d[i]);
  }

  return 0;
}

void R(int u, int v){
  if(d[v]> d[u]+a[u][v]){
    d[v]=d[u]+a[u][v];
    pi[v]=u;
  }
}

void ISS(int s){
  int v;
  for(v=0; v<n; v++){
    d[v]=INF;
    pi[v]=NIL;
  }
  d[s]=0;
}

void D(int s){
  int i, v1, v, minv, u;
  int flag[MAX];
  ISS(s);
 
  for(i=0; i<n; i++) flag[i]=0;

  for(v1=0; v1<n; v1++){
   
    minv = INF;
    for ( i = 0; i < n; i++ ){
      if(flag[i]==1) continue;
      if(d[i]<=minv){
    u=i;
    minv=d[i];
      }
    }
   
    for(v=0; v<n; v++){
      if(a[u][v]==-1) continue;
      if(flag[v]==1) continue;

      R(u, v);
    }
    flag[u]=1;
  }
}