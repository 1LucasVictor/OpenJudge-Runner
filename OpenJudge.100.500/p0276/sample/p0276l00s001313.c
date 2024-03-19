#include<stdio.h>
#define N 101

int main(){
  int num,i,j,k,v,list[N][N];
  
  scanf("%d",&num);
  
  for(i=1; i<=num; i++){
    for(j=1; j<=num; j++){
      list[i][j] = 0;
    }
  }

  for(i=1; i<=num; i++){
    scanf("%d%d",&k,&j);
    for(j; j>0; j--){
      scanf("%d",&v);
      list[k][v] = 1;
    } 
  }

  for(i=1; i<=num; i++){
    for(j=1; j<num; j++){
      printf("%d ",list[i][j]);
    }
    printf("%d\n",list[i][j]);
}

  return 0;
}