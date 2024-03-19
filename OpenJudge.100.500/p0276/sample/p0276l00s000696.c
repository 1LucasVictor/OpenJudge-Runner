#include <stdio.h>

int main(){

  int i,j,n,k,v,u;
   int a[100][100];
  
  scanf("%d",&n);

  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      a[i][j]=0;
  
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      a[u-1][v-1]=1;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d",a[i][j]);
      if(j<n-1) printf(" ");
    }
    printf("\n");
  }

  return 0;
}