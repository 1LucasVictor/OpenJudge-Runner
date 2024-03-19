#include<stdio.h>

int main()
{
  int n, a, i, j, b[4][13];
  char m;

  scanf("%d", &n);

  for(i = 0; i < 4; i++){
    for(j = 0; j < 13; j++){
      b[i][j] = 0;
    }
  }

  for(i = 0; i < n; i++){
    scanf(" %c%d", &m, &a);
    if(m == 'S') b[0][a-1] = 1;
    else if(m == 'H') b[1][a-1] = 1;
    else if(m == 'C') b[2][a-1] = 1;
    else b[3][a-1] = 1;
  }

  for(i = 0; i < 4; i++){
    for(j = 0; j < 13; j++){
      if(i == 0 && b[i][j] == 0) printf("S %d\n", j+1);
      else if(i == 1 && b[i][j] == 0) printf("H %d\n", j+1);
      else if(i == 2 && b[i][j] == 0) printf("C %d\n", j+1);
      else if(i == 3 && b[i][j] == 0) printf("D %d\n", j+1);
    }
  }
  return 0;
}