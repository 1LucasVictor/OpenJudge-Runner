#include <stdio.h>
#include <string.h>

int main (){

  int n,i,cards[4][13],num,si,ni;
  char symbol;

  scanf("%d",&n);

  for(si=0;si<4;si++){
    for(ni=0;ni<13;ni++)cards[si][ni]=1;
  }
  
  for(i=0;i<2*n;i++){

    scanf("%c %d",&symbol,&num);

    if(symbol=='S')cards[0][num-1]=0;
    else if(symbol=='H')cards[1][num-1]=0;
    else if(symbol=='C')cards[2][num-1]=0;
    else if(symbol=='D')cards[3][num-1]=0;
  }
  
  char mark[4]={'S','H','C','D'};

  for(si=0;si<4;si++){
    for(ni=0;ni<13;ni++){
      if(cards[si][ni]==1){
	printf("%c %d\n",mark[si],ni+1);
      }
    }
  }


  return 0;
}