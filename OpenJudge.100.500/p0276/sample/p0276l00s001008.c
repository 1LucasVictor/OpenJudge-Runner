#include<stdio.h>
typedef struct{
  int u;
  int k;
  int v[100];
}Graph;

main(){
  int i,j,n;
  int a[100][100];
  Graph node[100];
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&node[i].u);
    scanf("%d",&node[i].k);
    for(j=0;j<node[i].k;j++)scanf("%d",&node[i].v[j]);
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      a[i][j]=0;
    }
    for(j=0;j<node[i].k;j++){
      a[i][node[i].v[j]-1] = 1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d",a[i][j]);
     if(j<n)printf("\n");
    }
    printf("\n");
  }

  return 0;
}