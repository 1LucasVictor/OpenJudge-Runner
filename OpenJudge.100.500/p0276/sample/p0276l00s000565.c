#include<stdio.h>
 
int G[100][100];
 
int main(){
  int n,m,l,o,i,j;
 
  scanf("%d",&n);
   
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&m,&l);
    for(j=0;j<l;j++){
      scanf("%d",&o);
      G[i][o-1]=1;
    }
  }
   
  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      printf("%d ",G[i][j]);
    }
      printf("%d\n",G[i][j]);
 
  }
  return 0;
}