#include <stdio.h>

int main(int argc, char *argv[])
{
  int num, i, j;
  int card[4][13] = {0};
  char* mark[4] = {"S","H","C","D"};

  scanf("%d", &num);

  for (i = 0; i < num; i++) {
    char type[10];
    int value;

    scanf("%s %d", type, &value);
    switch (type[0]) {
    case 'S' : card[0][value - 1] = 1; break;
    case 'D' : card[3][value - 1] = 1; break;
    case 'C' : card[2][value - 1] = 1; break;
    case 'H' : card[1][value - 1] = 1; break;
    }
  }

  for (i = 0; i < 4; i++)
    for (j = 0; j < 13; j++)
      if (card[i][j] == 0)
	printf("%s %d\n", mark[i], j+1); 
  
  return 0;
}