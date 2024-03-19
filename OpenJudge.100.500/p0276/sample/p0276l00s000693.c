#include<stdio.h>
static const int N=100;

int main(){
  int A[N][N],n,u,k,v,i,j;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++)A[i][j]=0;
  }

  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    u--;
    for(j=0;j<k;j++){
      scanf("%d",&v);
      v--;
      A[u][v]=1;
  }
  }
  
for(i=0;i<n;i++){
  for(j=0;j<n;j++){
    if(j!=0)printf("\n");
    printf("%d",A[i][j]);
  }
  printf("\n");
  }

 return 0;
}

