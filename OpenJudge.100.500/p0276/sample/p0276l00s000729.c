#include<stdio.h>
#define MAX 50

int v[MAX][MAX];

main(){
  int a,b,ten,k,i,j,p,q;

  scanf("%d",&ten);
  for(i = 0;i < ten;i++){
    scanf("%d%d",&q,&p);
    for(j = 0;j < p;j++){
    scanf("%d",&b);
    v[q-1][b-1] = 1;
    }
    }
  for(i = 0;i < ten;i++){
    for(j = 0;j <ten-1; j++){
      printf("%d ",v[i][j]);
    }
    printf("%d\n",v[i][j]);
  }
  return 0;
}