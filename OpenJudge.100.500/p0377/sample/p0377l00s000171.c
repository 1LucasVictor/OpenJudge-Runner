#include<stdio.h>

int main(){
  int card[4][13], i, j, maisuu, num;
  char mark;
  
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      card[i][j]=0;
    }
  }
  
  scanf("%d",&maisuu);
  
  for(i=0;i<maisuu;i++){
    scanf("%c",&mark);
    scanf("%c %d",&mark,&num);
    
    if(mark=='S') card[0][num-1]=1;
    if(mark=='H') card[1][num-1]=1;
    if(mark=='C') card[2][num-1]=1;
    if(mark=='D') card[3][num-1]=1;
  }
  
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if(card[i][j]==0){
	if(i==0) printf("S %d\n",j+1);
	if(i==1) printf("H %d\n",j+1);
	if(i==2) printf("C %d\n",j+1);
	if(i==3) printf("D %d\n",j+1);
      }
    }
  }
  
  return 0;
}

