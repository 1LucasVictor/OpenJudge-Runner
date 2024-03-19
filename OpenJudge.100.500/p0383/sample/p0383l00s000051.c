#include <stdio.h>
#define M 100
#define N 100

void matrix(int ary[][N],int n,int m){
  int i,j;
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d",&ary[i][j]);
}

int main(void) {
  int n,m,l,i,j,k;
  int ma[M][N],mb[M][N];
  int mc[M][N]={0};
  scanf("%d %d %d",&n,&m,&l);
  matrix(ma,n,m);
  matrix(mb,m,l);
  for(i=0;i<n;i++)
    for(j=0;j<l;j++)
      for(k=0;k<m;k++)
	mc[i][j]+=ma[i][k]*mb[k][j];
  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      printf("%d",mc[i][j]);
      if(j!=(l-1))
	printf(" ");
    }
    printf("\n");
  }
  return 0;
}