#include <stdio.h>

int card[4][13];//0:exist 1:non-exist
char mark[]={'S', 'H', 'C', 'D'};

int main(){
  int i,j,n;
  char suit;
  int card_num;

  /*scan exiting card*/
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf(" %c %d", &suit, &card_num);
    if(suit=='S') card[0][card_num-1]=1;
    else if(suit=='H') card[1][card_num-1]=1;
    else if(suit=='C') card[2][card_num-1]=1;
    else if(suit=='D') card[3][card_num-1]=1;
  }

  /*print non existing cards*/
  for(i=0; i<4; i++)
    for(j=0; j<13; j++)
      if(card[i][j]==0)
	printf("%c %d\n", mark[i], j+1);
    
  return 0;
}