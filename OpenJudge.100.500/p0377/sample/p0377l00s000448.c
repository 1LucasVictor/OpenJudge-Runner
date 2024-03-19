#include <stdio.h>
#define S 0
#define H 1
#define C 2
#define D 3

int main(){
  int n, num,i, j, card[4][13] = {};
  char moji;
  scanf("%d", &n);
  for(i = 0;i < n;i++){
    scanf(" %c %d", &moji, &num);
    switch(moji){
    case 'S': card[S][num] = 1; break;
    case 'H': card[H][num] = 1; break;
    case 'C': card[C][num] = 1; break;
    case 'D': card[D][num] = 1; break;
    }
  }
  for(i = 0;i < 4;i++){
    for(j = 1;j < 14;j++){
      if(card[i][j] != 1){
	switch(i){
	case S: putchar('S'); break;
	case H: putchar('H'); break;
	case C: putchar('C'); break;
	case D: putchar('D'); break;
	}
	printf(" %d\n", j);
      }
    }
  }
  return 0;
}
