#include<stdio.h>
 
int main(){
  int cards[4][13] = {0};
  int i, j, n;
  int num[52], marknum;
  char mark[52];
   
  scanf("%d", &n);
   
  for(i=0; i<n; i++){
    scanf(" %c %d", &mark[i], &num[i]);
    switch(mark[i]){
    case 'S':
      marknum = 0;
      break;
    case 'H':
      marknum = 1;
      break;
    case 'C':
      marknum = 2;
      break;
    case 'D':
      marknum = 3;
      break;
    }
    cards[marknum][num[i]-1] = 1;
  }
   
 
   
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      switch(i){
      case 0:
        if(cards[0][j]==0){
          printf("S %d\n", j+1);
        }
        break;
      case 1:
        if(cards[1][j]==0){
          printf("H %d\n", j+1);
        }
        break;
      case 2:
        if(cards[2][j]==0){
          printf("C %d\n", j+1);
        }
        break;
      case 3:
        if(cards[3][j]==0){
          printf("D %d\n", j+1);
        }
        break;
      }
    }
  }
  return 0;
}