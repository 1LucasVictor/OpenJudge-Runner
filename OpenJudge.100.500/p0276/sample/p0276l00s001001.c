#include<stdio.h>
#define N 100

int main(){
  int i, j, k, n,m[N][N], a, b, c;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      m[i][j] = 0;
    }
  }
  for(k=0;k<n;k++){
    scanf("%d%d",&a,&b);
    for(i=0;i<b;i++){
      scanf("%d",&c);
      m[a-1][c-1] = 1;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j) printf(" ");
      printf("%d",m[i][j]);
    }
    printf("\n");
  }
  return 0;
}
    

