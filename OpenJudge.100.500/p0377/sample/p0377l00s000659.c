#include <stdio.h>
int main(void){
  int card[4][13];
  int maisuu;
  char gara;
  int rank;


  for(int i=0; i<4; i++) {
    for(int j=1; j<=13; j++){
      card[i][j] = 0;
    }
  }

  scanf("%d\n",&maisuu);

  for(int i=0; i<maisuu; i++){
    scanf("%c %d\n",&gara,&rank);
    if(gara == 'S'){
      card[0][rank-1] = 1;
    }else if(gara == 'H'){
      card[1][rank-1] = 1;
    }else if(gara == 'C'){
      card[2][rank-1] = 1;
    }else if(gara == 'D'){
      card[3][rank-1] = 1;
    }
  }

 for(int j=1;j<=13;j++) {
    if(card[0][j-1] != 1) {
      printf("S %d\n",j);
    }
  }
  for(int j=1;j<=13;j++) {
    if(card[1][j-1] != 1) {
      printf("H %d\n",j);
    }
  }
  for(int j=1;j<=13;j++) {
    if(card[2][j-1] != 1) {
      printf("C %d\n",j);
    }
  }
  for(int j=1;j<=13;j++) {
    if(card[3][j-1] != 1) {
      printf("D %d\n",j);
    }
  }

  return 0;
}
