#include<stdio.h>

int main(){
  int a,i,j,n,k,u,v[100][100];

  scanf("%d",&n);

  for(i=0;i<n;i++)for(j=0;j<n;j++)v[i][j]=0;
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    u--;
    for(j=0;j<k;j++){
      scanf("%d",&a);
      a--;
      v[u][a]=1;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
 if(j)printf(" ");
      printf("%d",v[i][j]);
     
    }
    printf("\n");
  }
  return 0;
}

