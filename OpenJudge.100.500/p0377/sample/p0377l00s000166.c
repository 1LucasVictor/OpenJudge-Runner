#include<stdio.h>
int main()
{
  int n, i, j, m, card[4][14];
  char mark;

  for(i = 0; i < 4; i++){
    for(j = 1; j <= 13; j++){
      card[i][j] = 0;
      
    }
  }
  
  scanf("%d",&n);

  for(i = 1; i <= n*2; i++){
    scanf("%c%d",&mark, &m);

    switch(mark){
    case 'S':
      card[0][m] = m;
      break;

    case 'H':
      card[1][m] = m;
      break;
      
    case 'C':
      card[2][m] = m;
      break;

    case 'D':
      card[3][m] = m;
      break;

    }
  }
  
  for(i=0; i<4; i++){
    for(j=1; j<=13; j++){
      if(card[i][j] == 0){
	switch(i){
	case 0:
	  printf("S %d\n",j);
	  break;

	case 1:
	  printf("H %d\n",j);
	  break;

	case 2:
	  printf("C %d\n",j);
	  break;

	case 3:
	  printf("D %d\n",j);
	  break;
	  
	}
      }
    }
  }
   
  return 0;
  
}