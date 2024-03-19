#include<stdio.h>

int main(){
  int array[200][200];
  
  int number;
  scanf("%d",&number);
  

  int i;
  int j;

  
  int me;
  int count;
  int u;

 for(i=0;i<number;i++){
    for(j=0;j<number;j++){
      array[i][j]=0;
    }
  }

  
  for(i=0;i<number;i++){
    scanf("%d",&me);
    scanf("%d",&count);

    for(j=0;j<count;j++){
      scanf("%d",&u);


      array[me][u]=1;

    
    }
  }


  for(i=0;i<number;i++){
    for(j=0;j<number;j++){
      if(j==number-1){printf("%d",array[i+1][j+1]);}
      else{ printf("%d ",array[i+1][j+1]);}
    }
    printf("\n");
  }

  
  
  return 0;}

