#include <stdio.h>

int n;

int main(){
  int i,j,num[101][101],res[101][101] = {};

  scanf("%d",&n);
  
  for(i = 1; i < n+1; i++){
    scanf("%d%d",&num[i][0],&num[i][1]);
    for(j = 0; j < num[i][1]; j++){
       scanf("%d",&num[i][2+j]);
       res[i][num[i][2+j]] = 1;
    }
  }
  
  for(i = 1; i < n+1; i++){
   for(j = 1; j < n+1; j++){
     if(j > 1)printf(" ");
     printf("%d",res[i][j]);
  }
   printf("\n");
  }
  return 0;
}

