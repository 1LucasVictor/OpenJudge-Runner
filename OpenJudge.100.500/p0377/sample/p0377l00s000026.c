#include <stdio.h>
  
int main(void){
  int n,i,j,num;
  char egara;
  int array[4][13];
  
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      array[i][j]=0;
    }
  }
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf(" %c %d", &egara,&num);
    switch(egara){
      case 'S' : array[0][num-1]=1; break;
      case 'H' : array[1][num-1]=1; break;
      case 'C' : array[2][num-1]=1; break;
      case 'D' : array[3][num-1]=1; break;
    }
  }
  
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if(array[i][j]==0){
        switch(i){
          case 0 : printf("S %d\n",j+1); break;
          case 1 : printf("H %d\n",j+1); break;
          case 2 : printf("C %d\n",j+1); break;
          case 3 : printf("D %d\n",j+1); break;
        }
      }
    }
  }
  
  return 0;
}