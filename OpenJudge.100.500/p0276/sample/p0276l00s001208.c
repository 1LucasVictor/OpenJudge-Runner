#include<stdio.h>

main(){
  int n,m,i,j,u,tmp;
  int adj[101][101];

  for(i=0;i<101;i++){
    for(j=0;j<101;j++){
      adj[i][j]=0;
    }
  }
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    scanf("%d %d",&u,&m);
    for(j=1;j<=m;j++){
      scanf("%d",&tmp);
      adj[u][tmp]++;
    }
  }
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("%d",adj[i][j]);
      if(j<n)printf(" ");
    }
    printf("\n");
  }
  return 0;
}