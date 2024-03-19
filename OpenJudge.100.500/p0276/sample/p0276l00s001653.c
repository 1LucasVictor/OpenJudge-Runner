#include <stdio.h>
int m[100][100];
int d[100];


void visit(int u){

}

int main (){
  int i,j,n,k,u,r;

  scanf("%d",&n);
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      m[i][j] = 0;

  for(i=0;i<n;i++){
    scanf("%d",&r);
    scanf("%d",&k);
    for(j=0;j<k;j++){
      scanf("%d",&u);
      m[r-1][u-1] = 1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d",m[i][j]);
      if(j<n-1) printf(" ");
    }
    printf("\n");
  }
  return 0;
}

    