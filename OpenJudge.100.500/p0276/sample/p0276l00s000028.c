#include <stdio.h>

int main(){
  int i,j,n,m,t,v[200][200];

  scanf("%d",&n);

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      v[i][j]=0;
    }
  }

  for(i=1;i<=n;i++){
    scanf("%d%d",&t,&m);
    for(j=0;j<m;j++){
      scanf("%d",&t);
      v[i][t]=1;
    }
  }

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(j!=1){
	printf(" ");
      }
      printf("%d",v[i][j]);
    }
    printf("\n");
  }

  return 0;
}

