#include<stdio.h>
int main(){
  int cards[4][13]={{0}};
  int n,i,x,j;
  char kind;
  scanf("%d\n",&n);
  for(i=0;i<n;i++){
    scanf("%c %d\n",&kind,&x);
    if(kind=='S'){
      cards[0][x-1]=1;
    }else if(kind=='H'){
      cards[1][x-1]=1;
    }else if(kind=='C'){
      cards[2][x-1]=1;
    }else{
      cards[3][x-1]=1;
    }
  }

  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if(cards[i][j]==0){
        if(i==0){
          printf("S %d\n",j+1);
        }else if(i==1){
          printf("H %d\n",j+1);
        }else if(i==2){
          printf("C %d\n",j+1);
        }else{
          printf("D %d\n",j+1);
        }
      }
    }
  }
  return 0;
}
