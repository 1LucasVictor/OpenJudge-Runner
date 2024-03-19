#include<stdio.h>
#define N 101
int main(){

  int ary[N][N];
  int i,j,n,hs,hn,h;
  scanf("%d",&n);
  for(i=1;i<N;i++){
    for(j=1;j<N;j++){
      ary[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&hs,&hn);
    for(j=0;j<hn;j++){
      scanf("%d",&h);
      ary[hs][h]=1;
    }
  }
  for(i=1;i<=n;i++){
    for(j=01;j<=n;j++){
      if(j>1)printf(" ");
      printf("%d",ary[i][j]);
    }
    printf("\n");
  }
  return 0;
}

      
    
    

