#include<stdio.h>
int main(void){
  int m,l,n;
  scanf("%d%d%d",&n,&m,&l);
  int i,j,k;
  int list,list1[n][m],list2[m][l];

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&list1[i][j]);
    }
  }
  for(j=0;j<m;j++){
    for(k=0;k<l;k++){
      scanf("%d",&list2[j][k]);
    }
  }
  for(i=0;i<n;i++){
    for(k=0;k<l;k++){
      list=0;
      for(j=0;j<m;j++){
        list+=list1[i][j]*list2[j][k];
      }
      printf("%d",list);
      (k!=l-1)?printf(" "):printf("");
    }
    printf("\n");
  }
  return 0;
}