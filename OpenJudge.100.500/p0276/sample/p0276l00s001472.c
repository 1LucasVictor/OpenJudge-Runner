#include<stdio.h>
#include<string.h>
int main(){
  int n,i,j,a[101][101],m,l;
  scanf("%d",&n);
  for(i=1;i<=n;i++) for(j=1;j<=n;j++) a[i][j]=0;
  for(i=1;i<=n;i++){
    scanf("%d %d",&j,&m);

    for(j=1;j<=m;j++){
      scanf("%d",&l);
      a[i][l]=1;
    }
  }
  for(i=1;i<=n;i++) for(j=1;j<=n;j++) {
      printf("%d",a[i][j]);
      if(j==n) printf("\n");
      else printf(" ");
    }
  
}

