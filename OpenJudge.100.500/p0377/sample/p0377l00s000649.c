#include <stdio.h>
int main()
{
  int i, j, n, m;
  char k;
  int card[4][13];
  scanf("%d%*c",&n);
  for(i = 0; i < n; i++){
    scanf("%c %d%*c",&k, &m);
    if(k == 'S'){
      for(j = 0; j < m; j++){
	if(j == (m - 1)){
	  card[0][j] = 1;
	}
      }
    } else if(k == 'H'){
      for(j = 0; j < m; j++){
	if(j == (m - 1)){
	  card[1][j] = 1;
	}
      }
    } else if(k == 'C'){
      for(j = 0; j < m; j++){
	if(j == (m - 1)){
	  card[2][j] = 1;
	}
      }
    } else if(k == 'D'){
      for(j = 0; j < m; j++){
	if(j == (m - 1)){
	  card[3][j] = 1;
	}
      }
    }
  }
  for(i = 0; i < 4; i++){
    for(j = 0; j < 13; j++){
      if(card[i][j] != 1){
	if(i == 0){
	  printf("S %d\n", j + 1);
	} else if(i == 1){
	  printf("H %d\n", j + 1);
	} else if(i == 2){
	  printf("C %d\n", j + 1);
	} else if(i == 3){
	  printf("D %d\n", j + 1);
	}
      }
    }
  }
  return 0;
}