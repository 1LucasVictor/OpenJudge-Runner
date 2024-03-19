#include <stdio.h>

typedef struct ver{
  int u,v;
} ver;
  
int n,u;
ver adj[100];
int A[100][100];

int main(){
  int i,j,k,v;
  
  for(i=0;i<100;i++){
    adj[i].u=0;
    adj[i].v=0;
  }

  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&u);
    scanf("%d",&k);
    for(j=1;j<=k;j++){
      scanf("%d",&v);
      adj[j].u=u;
      adj[j].v=v;
      A[adj[j].u][adj[j].v]=1; 
    }
  }
  
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    printf("%d",A[i][j]);
    if(j != n)
      printf(" ");
    }
    printf("\n");
  }
  
  return 0;
}