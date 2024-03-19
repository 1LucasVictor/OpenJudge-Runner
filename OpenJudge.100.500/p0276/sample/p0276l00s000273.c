#include<stdio.h>
#define N 100


int main(){
  int A[N][N];
  int n,i,j,h,r,g;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&h,&r);
    h--;
    for(j=0;j<r;j++){
      scanf("%d",&g);
      g--;
    A[h][g]=1;
  }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j){
      printf(" ");
    }
      printf("%d",A[i][j]);
    }printf("\n");
  }
}

