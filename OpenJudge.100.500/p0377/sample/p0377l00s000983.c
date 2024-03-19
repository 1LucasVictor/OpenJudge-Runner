#include <stdio.h>

char convert_mark(int i);

int main(int argc, char *argv[])
{
  int cards[4][13 + 1];
  int n, i, j;
  char mark, ret;
  int rank;
  
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 14; j++) {
      cards[i][j] = 0;
    }
  }
  
  scanf("%d", &n);
  scanf("%c", &ret);

  for (i = 0; i < n; i++) {
    scanf("%c", &mark);
    scanf("%d", &rank);
    scanf("%c", &ret);
    switch (mark) {
    case 'S':
      cards[0][rank] = 1;
      break;
      
    case 'H':
      cards[1][rank] = 1;
      break;
      
    case 'C':
      cards[2][rank] = 1;
      break;
      
    case 'D':
      cards[3][rank] = 1;
      break;
    }
  }
  
  for (i = 0; i < 4; i++) {
    for (j = 1; j <= 13; j++) {
      if (cards[i][j] == 0) {
        printf("%c %d\n", convert_mark(i), j);
      }
    }
  }
  
  return 0;
}

char convert_mark(int i)
{
  switch (i) {
  case 0:
    return 'S';
    
  case 1:
    return 'H';
    
  case 2:
    return 'C';
    
  case 3:
    return 'D';
    
  default:
    return 'X';
  }
}