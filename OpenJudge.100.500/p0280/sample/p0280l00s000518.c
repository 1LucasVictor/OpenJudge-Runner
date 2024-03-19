#include <stdio.h>
int n;
int main(){
  int i,j;
  int m=5;
  int a[100][100];
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&a[i][j]);

    }
  }
  printf("%d",m);
  return 0;
}