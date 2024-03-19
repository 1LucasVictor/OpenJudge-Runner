#include<stdio.h>
int main(void){
  int n,i,j,num;
  int Card[5][14]={0};
  char Clue;
  char Symbol[5][1]={'n','S','H','C','D'};
  scanf("%d",&n);
  if(n<=52){
    for(i=0;i<n;i++){
      scanf("\n%c %d",&Clue,&num);
      if(Clue=='S'){
        Card[1][num]=1;
      }
      else if(Clue=='H'){
        Card[2][num]=1;
      }
      else if(Clue=='C'){
        Card[3][num]=1;
      }
      else if(Clue=='D'){
        Card[4][num]=1;
      }
    }
    for(i=1;i<=4;i++){
      for(j=1;j<=13;j++){
        if(Card[i][j]==0){
          printf("%c %d\n",Symbol[i][0],j);
        }
      }
    }
  }
  return 0;
}