#include <stdio.h>
 
#define S 0
#define H 1
#define C 2
#define D 3
 
int main(){
  int n, num, l, i, j, c[5][16] = {};
  char m;
  scanf("%d", &n);
  for(i = 0;i < n;i++){
    scanf(" %c %d", &m, &num);
    switch(m){
    case 'S': c[S][num] = -1; break;
    case 'H': c[H][num] = -1; break;
    case 'C': c[C][num] = -1; break;
    case 'D': c[D][num] = -1; break;
    }
  }
 
  for(i = 0;i < 4;i++){
    for(j = 1;j < 14;j++){
      if(c[i][j] != -1){
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