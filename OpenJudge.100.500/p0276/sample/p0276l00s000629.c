#include <stdio.h>
int main(int argc, char const *argv[]) {
  int A[100][100];
  int i,n,u,j,k;
  int v;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    if(k!=0){
      for(j=0;j<k;j++){
        scanf("%d",&v);
        A[u-1][v-1]=1;
      }
    }
  }

  for(i=0;i<n;i++){
    for (j=0;j<n;j++) {
      printf("%d",A[i][j]);
      if(j!=n-1) printf(" ");
    }
    printf("\n");
  }
  return 0;
}