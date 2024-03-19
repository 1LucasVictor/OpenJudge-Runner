#include<stdio.h>
#define N 10000

int G[N][N];

int main(){
  int n,i,j,k,b[N],a[N];
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j] = 0;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(j=0;j<k;j++){
      scanf("%d",&b[j]);
      G[a[i]][b[j]] = 1;
    }
  }

 
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("%d",G[i][j]);
      if(j < n){
      printf(" ");
      }
    }
    printf("\n");
    }

  return 0;
}

