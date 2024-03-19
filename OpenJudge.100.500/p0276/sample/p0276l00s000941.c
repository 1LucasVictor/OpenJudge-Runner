#include <stdio.h>
int arr[101][101];

int main(){

  int i,j,num,len,m,k;

  scanf("%d",&num);

  for(i = 0 ; i < num ; i ++){
    for(j = 0 ; j < num ; j++){
      arr[i][j] = 0;
    }
  }

  for(i = 0 ; i < num ; i++){
    
    scanf("%d%d",&m,&len);
   
    for(j = 0 ; j < len ; j++){
   
      scanf("%d",&k);
    
      arr[i][k-1] = 1;
   
    }
  }

  for(i = 0 ; i < num ; i++){
    for(j = 0 ; j < num-1 ; j++){
      printf("%d ",arr[i][j]);
    }
    printf("%d\n",arr[i][j]);
  }
  return 0;
}