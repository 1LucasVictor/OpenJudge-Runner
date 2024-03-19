#include <stdio.h>
#define MARK 4
#define NUM 13

int zero(int*);

int main(){
  int card[MARK][NUM];
  char mark;
  int num;
  int roop;
  int i;
  int j;

  zero(&card[0][0]);

  scanf("%d", &roop);
  
  for(i = 0;i < roop;i++){
    scanf("%c", &mark);
    if(mark == '\n'){
      while(1){
	scanf("%c", &mark);
	if(mark != '\n') break;
      }
    }
    scanf("%d", &num);
    --num;
    if(mark == 'S') card[0][num] = 1;
    else if(mark == 'H') card[1][num] = 1;
    else if(mark == 'C') card[2][num] = 1;
    else if(mark == 'D') card[3][num] = 1;
  }

  for(i = 0;i < MARK;i++){
    for(j = 0;j < NUM;j++){
      if(card[i][j] == 0){
	if(i == 0) printf("S");
	else if(i == 1) printf("H");
	else if(i == 2) printf("C");
	else if(i == 3) printf("D");
	printf(" %d\n", j+1);
      }
    }
  }
	

  
  return 0;
}

int zero(int *x){
  int *p = x;
  for(;p < x + MARK*NUM;p++)
    *p = 0;
}

