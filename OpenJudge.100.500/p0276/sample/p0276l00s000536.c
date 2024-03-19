#include<stdio.h>

#define N 101

int main(){
  int i,j,id,k,n,d;
  int a[N][N];

  scanf("%d",&n);

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      a[i][j]=0;
    }
  }

  for(i=1;i<=n;i++){
    scanf("%d%d",&id,&k);
    for(j=1;j<=k;j++){
      scanf("%d",&d);
      a[i][d]=1;
    }
  }

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("%d",a[i][j]);
      if(j!=n){
	printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}

