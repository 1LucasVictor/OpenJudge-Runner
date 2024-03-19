#include <stdio.h>
main(){
  int n,kazu,card[4][13]={0},i,j,k;
  char mark;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf(" %c %d",&mark,&kazu);
    if(mark=='S'){
      card[0][kazu-1]=1;
    }
    else if(mark=='H'){
      card[1][kazu-1]=1;
    }
    else if(mark=='C'){
      card[2][kazu-1]=1;
    }
    else if(mark=='D'){
      card[3][kazu-1]=1;
    }
  }
  for(j=0;j<4;j++){
    for(i=1;i<14;i++){
      if(card[j][i-1]!=1 && j==0){
	printf("S %d\n",i);
      }
      else if(card[j][i-1]!=1 && j==1){
	printf("H %d\n",i);
      }
      else if(card[j][i-1]!=1 && j==2){
	printf("C %d\n",i);
      }
      else if(card[j][i-1]!=1 && j==3){
	printf("D %d\n",i);
      }
    }
  }
  return 0;
}