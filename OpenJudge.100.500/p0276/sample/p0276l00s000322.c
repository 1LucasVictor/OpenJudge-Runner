#include<stdio.h>
int main(){

  int n,k,u,v,i,j,d[101][101];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      d[i][j]=0;
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      d[i][v-1]=1;
    }
  }
    for(i=0;i<n;i++){
      if(i!=0)printf("\n");
      for(j=0;j<n;j++){
       	printf("%d",d[i][j]);
	if(j!=n-1)printf(" ");
      }
    }
    printf("\n");
    return 0;
}