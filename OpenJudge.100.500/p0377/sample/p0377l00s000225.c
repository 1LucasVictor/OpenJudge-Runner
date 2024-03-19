#include <stdio.h>

int main()
{

int n,cards[4][14],num,i,j;
char mark;


//cards?????????
  for ( i = 0; i < 4; i++)
  {
    for ( j = 1; j <= 13; j++)
    {
      cards[i][j] = 0;
    }
  }


//?????£??????????????°
  scanf("%d", &n);


//?????£???????????????????????\???
  for ( i = 0; i < n; i++)
  {

    getchar();
    scanf("%c %d", &mark, &num);

    if (mark == 'S')
    {
      cards[0][num] = 1;
    }
    else if (mark == 'H')
    {
      cards[1][num] = 1;
    }
    else if (mark == 'C')
    {
      cards[2][num] = 1;
    }
    else
    {
      cards[3][num] = 1;
    }
  }


//?????£??????????????????????????????
  for ( i = 0; i < 4; i++)
  {
    for ( j = 1; j <= 13; j++)
    {
      if (cards[i][j] != 1 && i == 0) {
        printf("S %d\n", j);
      }
      else if (cards[i][j] != 1 && i == 1)
      {
        printf("H %d\n", j);
      }
      else if (cards[i][j] != 1 && i == 2)
      {
        printf("C %d\n", j);
      }
      else if (cards[i][j] != 1 && i == 3)
      {
        printf("D %d\n", j);
      }
    }
  }

  return 0;
}