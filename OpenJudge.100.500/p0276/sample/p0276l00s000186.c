#include<stdio.h>
#define N 100

int main(){
  int array[N][N],i,j,n,number,k,c;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      array[i][j]=0;
    }
  }

  for(i=1;i<=n;i++){
    scanf("%d%d",&number,&k);
    for(j=1;j<=k;j++){
      scanf("%d",&c);
      array[i][c]=1;
    }
  }

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("%d",array[i][j]);
      if(j!=n) printf(" ");
    }
    printf("\n");
  }
  return 0;
}