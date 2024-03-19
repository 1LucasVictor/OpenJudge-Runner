#include <stdio.h>

int judge1(int[]);
void judge2(int[]);
void set(int[], int);
void print(int[]);

int n, Q[8][2];

int main(){
  int i, queen[8];

  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%d%d",&Q[i][0],&Q[i][1]);
  }
  
  set(queen, 0);
}

int judge1(int queen[8]){
  int i, j;
    
  for (i = 0; i < 7; i++) {
      for (j = i+1; j < 8; j++) {
	if (queen[i] == queen[j] || abs(queen[i] - queen[j]) == j - i) return 0;
      }
  }
  return 1;
}

void judge2(int queen[8]){
  int i, j, count = 0;  

  for (i = 0; i < 8; i++){
    for(j = 0; j < n; j++){
      if(i == Q[j][0] && queen[i] == Q[j][1])count++;
    }
  }
  if(count == n) print(queen);
}

void set(int queen[], int i){
  int j;
    
  if (i == 8) {
    if (judge1(queen)) judge2(queen);
    return;
  }
    
  for (j = 0; j < 8; j++) {
    queen[i] = j;
	set(queen, i+1);
  }
}

void print(int queen[8]){
  int i, j;
  
  for(i = 0; i < 8; i++){
    for(j = 0; j < 8; j++){
      if(j == queen[i]) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}


