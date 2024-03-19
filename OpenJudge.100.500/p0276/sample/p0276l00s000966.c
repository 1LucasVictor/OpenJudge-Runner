#include<stdio.h>
#define N 100

int main(){
  int Mtw[N][N];
  int i,j,n,utw,ktw,vtw;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++)Mtw[i][j]=0;
  }

  for(i=0;i<n;i++){
    scanf("%d %d",&utw,&ktw);
    utw--;
    for(j=0;j<ktw;j++){
      scanf("%d",&vtw);
      vtw--;
      Mtw[utw][vtw]=1;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j)printf(" ");
      printf("%d",Mtw[i][j]);
    }
    printf("\n");
  }

  return 0;
}

