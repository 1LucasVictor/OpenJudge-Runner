#include<stdio.h>
#define MAX 101

int main(){
  int n,i,j,k,a,b;
  int v[MAX][MAX];
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++) v[i][j]=0;
  }
  
  for(i=1;i<=n;i++){
    scanf("%d%d",&a,&k);
    
    for(j=1;j<=k;j++){
      scanf("%d",&b);
      v[a][b]=1;
    }
    
  }

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("%d",v[i][j]);
      if(j!=n) printf(" ");
    }
    printf("\n");
  }
  
  return 0;
}

