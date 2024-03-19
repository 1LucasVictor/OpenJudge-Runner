#include <stdio.h>

int main(){
  int n,n2,a[101][101],i,j,x,y;

  for(i=1; i<101; i++)
    for(j=1; j<101; j++)
      a[i][j]=0;

  scanf("%d",&n);

  for(i=1; i<n+1; i++){
    scanf("%d%d",&x,&n2);
    for(j=0; j<n2; j++){
      scanf("%d",&y);
      a[x][y]=1;
    }
  }

  for(i=1; i<n+1; i++){
    for(j=1; j<n; j++)
      printf("%d ",a[i][j]);
    printf("%d\n",a[i][j]);
  }

  return 0;
}
	   

    

