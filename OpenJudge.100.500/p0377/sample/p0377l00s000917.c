#include <stdio.h>

int main()
{
  int i, n, rank;
  int card[4][14];
  char id;

  for( i = 0 ; i <= 3 ; i++ )
  {
    for( rank = 0 ; rank <= 13 ; rank++ )
      card[i][rank] = 0;
  }
  scanf("%d", &n);

  for( i = 0 ; i < n ; i++ )
  {
    scanf("%c", &id);
    scanf("%c %d", &id, &rank);
    if( id == 'S' )
      card[0][rank] = 1;
    else if( id == 'H' )
      card[1][rank] = 1;
    else if( id == 'C' )
      card[2][rank] = 1;
    else if( id == 'D' )
      card[3][rank] = 1;
  }

  for( i = 0 ; i <= 3 ; i++ )
  {
    for( rank = 1 ; rank <= 13 ; rank++ )
    {
      if( card[i][rank] != 1 )
      {
        if(i == 0)
          printf("S %d\n", rank);
        else if(i == 1)
          printf("H %d\n", rank);
        else if(i == 2)
          printf("C %d\n", rank);
        else
          printf("D %d\n", rank);
      }
    }
  }
}

