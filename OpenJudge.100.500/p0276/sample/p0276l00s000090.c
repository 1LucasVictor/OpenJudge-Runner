                                       
#include<stdio.h>
#define MAX 100

int main(){
  int Graf[MAX][MAX];
  int n,i,j,k,num;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){

      Graf[i][j]=0;
    }
  }
  while(1){
    scanf("%d%d",&i,&num);
  for(k=0;k<num;k++){
    scanf("%d",&j);
    Graf[i][j]=1;
  }
     if(i==n)break;
  }
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("%d ",Graf[i][j]);
    }
    printf("\n");
  }
  return 0;
}