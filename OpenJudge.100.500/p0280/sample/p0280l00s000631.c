#include <stdio.h>
#define INF 10000000
#define N 500
//nil = -1, white = 0, black = 1

int main(){
  int i,j,min,x,sum=0;
  int n,A[N][N],B[N],C[N],color[N];

  //input
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&A[i][j]);
    }
  }
  //processing
  for(i=1;i<=n;i++){
    B[i] = INF;
    C[i] = -1;
    color[i] = 0;
  }
  B[1] = 0;
  while(1){
    min=INF;
    for(i=1;i<=n;i++){
      if(color[i]!=1&&B[i]<min){
	min=B[i];
	x=i;
      }
    }
    if(min==INF)break;
    color[x]=1;
    for(j=1;j<=n;j++){
      if(color[j]!=1&&A[x][j]<B[j]&&A[x][j]!=-1){
	C[j]=x;
	B[j]=A[x][j];
      }
    }
  }
  for(i=1;i<=n;i++){
    sum+=B[i];
  }
  printf("%d\n",sum);
  return 0;
}
