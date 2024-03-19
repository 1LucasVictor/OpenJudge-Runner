#include<stdio.h>
int main(){
  int a,b,d,j,i,c;
  int A[100][100]={};
  scanf("%d",&a);
  for(i=0;i<a;i++){
    scanf("%d%d",&b,&d);
    for(j=0;j<d;j++){
      scanf("%d",&c);
      A[b-1][c-1]=1;
    }
  }
  for(i=0;i<a;i++){
    for(j=0;j<a;j++){
      if(j==a-1)printf("%d",A[i][j]);
      else printf("%d ",A[i][j]);
    }
    printf("\n");
  }
}

