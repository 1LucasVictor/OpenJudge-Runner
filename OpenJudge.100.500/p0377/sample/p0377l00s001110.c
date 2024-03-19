#include <stdio.h>

int main(void){
  int n,i,j,x,rank,S,H,C,D;
  char mark;//mark:文字 x:数字
  int card[4][13];
  int a[4][13];
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf(" %c%d",&mark,&rank);
    rank -= 1;
    switch(mark){//文字を数値に変換
        case 'S':
        x = 0;
        break;
        case 'H':
        x = 1;
        break;
        case 'C':
        x = 2;
        break;
        case 'D':
        x = 3;
        break;
      }
    a[x][rank] = x * 100 + rank + 1;
  }
  
  for(x = 0; x < 4; x++){
    switch(x){//数値を文字に再変換
        case 0:
        mark = 'S';
        break;
        case 1:
        mark = 'H';
        break;
        case 2:
        mark = 'C';
        break;
        case 3:
        mark = 'D';
        break;
    }
    for(rank = 0; rank < 13; rank++){
      if(a[x][rank] != x * 100 + rank + 1){
        printf("%c %d\n",mark,rank + 1);
      }
    }
  }
  return 0;
}
