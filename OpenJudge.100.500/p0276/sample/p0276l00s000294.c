#include<stdio.h>
#include<stdlib.h>
#define N 101


int main(){
  int i,j,num,num2,num3,num4[N][N],num5[N];
  
  scanf("%d",&num);
  for(i=1;i<=num;i++){
    for(j=1;j<=num;j++){
      num4[i][j] = 0;
    }
  }
  for(i=1;i<=num;i++){
    scanf("%d",&num5[i]);
    scanf("%d",&num2);
    if(num2 == 0)continue;
   

    else{
      for(j=0;j<num2;j++){
	scanf("%d",&num3);
	num4[i][num3] = 1;  
      }
    }
    
  }
  
  for(i=1;i<=num;i++){
    for(j=1;j<num;j++){
      printf("%d ",num4[i][j]);
    }
    printf("%d\n",num4[i][num]);
  }


  return 0;
}