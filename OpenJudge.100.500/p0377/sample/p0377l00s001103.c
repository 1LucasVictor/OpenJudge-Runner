#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main(){
  int cards[4][13];
  int n,rank;
  char suit;
  int i,p,q;

  for( int s = 0; s < 4; s++){
    for( int r = 0; r < 13; r++){
      cards[s][r] = 0;
    }
  }
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%s",&suit);
    scanf("%d",&rank);
    if(suit == 'S'){
      cards[0][rank] = 1;
    }
    else if(suit == 'H'){
       cards[1][rank] = 1;
    }
    else if(suit == 'C'){
       cards[2][rank] = 1;
    }
    else if(suit == 'D'){
       cards[3][rank] = 1;
    }
  }

  for(int s = 0; s < 4; s++){
    for (int r = 1; r <= 13; r++){
      if(cards[s][r] == 1){continue;}
      else if(s == 0){
  	suit = 'S';
      }
      else if(s == 1){
  	suit = 'H';
      }
      else if(s == 2){
  	suit = 'C';
      }
      else if(s == 3){
  	suit = 'D';
      }
    printf("%c %d\n",suit,r);
    }
  }
  
  
    return 0;
}