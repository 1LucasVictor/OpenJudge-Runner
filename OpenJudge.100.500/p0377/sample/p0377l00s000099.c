#include <stdio.h>

int main(){
  int i,j,n;
  char mark,c;
  int num;

  scanf("%d",&n);

  int cards[4][13];

  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      cards[i][j]=0;
    }
  }

  for(i=0; i<n; i++){
    scanf("%c",&c);
    scanf("%c %d",&mark,&num);

    if(mark=='S') j=0;
    else if(mark=='H') j=1;
    else if(mark=='C') j=2;
    else j=3;

    cards[j][num-1]=1;
  }
  
  char str[4]={'S','H','C','D'};

  for(i=0; i<4; i++){
    for(j=0; j<13; j++){
      if(cards[i][j]==0) printf("%c %d\n",str[i],j+1);
    }
  }
  return 0;
}