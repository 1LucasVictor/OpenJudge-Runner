#include<stdio.h>

int main(){
  int cards[4][13]={};
  int all,num;
  char mark;
  int i,j;

  scanf("%d",&all);
  for(i=0;i<all;i++){
    scanf(" %c%d",&mark,&num);
    if(mark=='S') cards[0][num-1]=1;
    if(mark=='H') cards[1][num-1]=1;
    if(mark=='C') cards[2][num-1]=1;
    if(mark=='D') cards[3][num-1]=1;
  }
  
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if(i==0 && cards[i][j]==0) printf("S %d\n",j+1);
      if(i==1 && cards[i][j]==0) printf("H %d\n",j+1);
      if(i==2 && cards[i][j]==0) printf("C %d\n",j+1);
      if(i==3 && cards[i][j]==0) printf("D %d\n",j+1);
    }
  }
  return 0;
}