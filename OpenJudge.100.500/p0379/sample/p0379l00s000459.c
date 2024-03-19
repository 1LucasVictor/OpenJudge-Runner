#include<stdio.h>
int main(){
  int A[100][100],b[100],c[1000],x[100];
  int n,m;
  int i,j;
  
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d",&A[i][j]);

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(i==0){
	scanf("%d",&x[j]);
	b[j]=x[j];
      }
      c[i]+=A[i][j]*b[j];
    }
  }

  for(i=0;i<n;i++)
    printf("%d\n",c[i]);

return 0;
}