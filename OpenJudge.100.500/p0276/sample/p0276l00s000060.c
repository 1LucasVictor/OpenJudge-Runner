#include<stdio.h>
#define N 100
int main(){
  int n,i,j;
  int Adj[N][N];
  int a[N][N];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&Adj[i][0],&Adj[i][1]);
    for(j=2;j<Adj[i][1]+2;j++){
      scanf("%d",&Adj[i][j]);
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      a[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    for(j=2;j<n;j++){
      a[i][Adj[i][j]-1]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d",a[i][j]);
      if(j!=n-1)printf(" ");
    }
    printf("\n");
  }

  return 0;
}