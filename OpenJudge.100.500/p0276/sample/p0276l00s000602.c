#include <stdio.h>

int main(){
  int A[100][100];
  int i,j;
  int n,x,y,z;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=0;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&x,&y);
    x--;
    for(j=0;j<y;j++){
      scanf("%d",&z);
      z--;
      A[x][z]=1;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j!=0)printf(" ");
      printf("%d",A[i][j]);
    }
    printf("\n");
  }

  return 0;
}

