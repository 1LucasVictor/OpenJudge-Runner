#include<stdio.h>
int main(){
  int n,j,i,su;
  char mark;
  scanf("%d",&n);
  int card[4][13]={0};
  for(i=0;i<n;i++){
    scanf(" %c %d",&mark,&su);
    switch  (mark){
    case 'S': card[0][su-1]=1;
      break;
    case 'H': card[1][su-1]=1;
      break;
    case 'C': card[2][su-1]=1;
      break;
    case 'D': card[3][su-1]=1;
      break;
    }
  }
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if(card[i][j]==0){
      if(i==0)printf("S %d\n",j+1);
      if(i==1)printf("H %d\n",j+1);
      if(i==2)printf("C %d\n",j+1);
      if(i==3)printf("D %d\n",j+1);
      }
    }
  }
  return 0;
}