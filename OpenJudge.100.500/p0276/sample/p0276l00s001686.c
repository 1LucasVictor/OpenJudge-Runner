#include<stdio.h>
int N=100;

int main(){
  int M[N][N],n,a,b,c,i,j;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++)M[i][j] = 0;
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&a,&b);
    a--;
    for(j=0;j<b;j++){
      scanf("%d",&c);
      c--;
      M[a][c] = 1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j)printf(" ");
      printf("%d",M[i][j]);
    }
    printf("\n");

  }
  return 0;
}

