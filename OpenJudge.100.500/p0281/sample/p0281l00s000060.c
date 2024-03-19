#include<stdio.h>

#define N 2000
#define A 101
#define NIL -1

void Prim();

static const int MAX=500;
static const int INFTY=(1<<21);

int M[A][A], p[A], S[A], d[A], n;

main(){
  int i, j, u, k, v, c;
  scanf("%d", &n);
  for (i=0; i<n; i++)
    for (j=0; j<n; j++){
      M[i][j]=INFTY;
    }
  
  for (i=0; i<n; i++){
    scanf("%d %d", &u, &k);
    for (j=0; j<k; j++){
      scanf("%d %d", &v, &c);
      M[u][v]=c;
    }
  }
  Prim();
  for (i=0; i<n; i++) printf("%d %d\n", i, (d[i]==INFTY?-1:d[i]));
  
  return 0;
}

void Prim(){
  int i, v, u, k[A];
  for(u=0;u<n;u++){
    k[u]=INFTY;
    p[u]=NIL;
    d[u]=INFTY;
  }
  
  k[0]=0;
  
  while(1){
    int minv=INFTY;
    u=NIL;
    for(i=0; i<n; i++)
      if(k[i]<minv && p[i]==NIL){
	u=i;
	minv=k[i];
      }
    
    if(u==NIL) break;
    p[u]=1;
    d[u]=k[u];
    for(v=0;v<n;v++) if(p[v]!=1 && k[u]+M[u][v]<k[v]) k[v]=k[u]+M[u][v];
  }
}