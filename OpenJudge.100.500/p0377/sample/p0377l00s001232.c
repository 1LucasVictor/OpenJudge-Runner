#include <stdio.h>

int main(void){
  int n;
  int i, j;
  int card[4][13];
  int rank;
  char suite[2];

  for (i = 0; i < 4; i++){
    for (j = 0; j < 13; j++){
      card[i][j] = 0;
    }
  }

  scanf("%d\n", &n);

  for (i = 0; i < n; i++){
    scanf("%s %d", suite, &rank);
    if      (suite[0] == 'S') card[0][rank-1] = 1;
    else if (suite[0] == 'H') card[1][rank-1] = 1;
    else if (suite[0] == 'C') card[2][rank-1] = 1;
    else if (suite[0] == 'D') card[3][rank-1] = 1;
  }

  for (i = 0; i < 4; i++){
    for (j = 0; j < 13; j++){
      if      (card[0][j] == 0 && i == 0) printf("S %d\n", j+1);
      else if (card[1][j] == 0 && i == 1) printf("H %d\n", j+1);
      else if (card[2][j] == 0 && i == 2) printf("C %d\n", j+1);
      else if (card[3][j] == 0 && i == 3) printf("D %d\n", j+1);
    }
  }

  return 0;
}

