#include <stdio.h>

int main(void){
  int i, j, n, x, card[4][13];  /* ?????????S,H,C,D ????????? */
  char mark;

  /* ????????? */
  for(i = 0; i < 4; i++){
    for(j = 0; j < 13; j++){
      card[i][j] = 0;
    }
  }

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%*c%c %d", &mark, &x);
    switch(mark){
    case 'S':
      card[0][x-1] = 1;
      break;
    case 'H':
      card[1][x-1] = 1;
      break;
    case 'C':
      card[2][x-1] = 1;
      break;
    case 'D':
      card[3][x-1] = 1;
      break;
    }
  }

  for(i = 0; i < 4; i++){
    for(j = 0; j < 13; j++){
      if(card[i][j] == 0){
	switch(i){
	case 0:
	  printf("S %d\n", j+1);
	  break;
	case 1:
	  printf("H %d\n", j+1);
	  break;
	case 2:
	  printf("C %d\n", j+1);
	  break;
	case 3:
	  printf("D %d\n", j+1);
	  break;
	}
      }
    }
  }
  return 0;
}