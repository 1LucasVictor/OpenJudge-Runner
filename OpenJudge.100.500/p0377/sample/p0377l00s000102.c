#include <stdio.h>

int main(void){
  int cards[4][13] = {};
  int i,j,n;
  char c;

  scanf("%d", &n);
  while(n){
    scanf(" %c %d", &c, &j);
    if(c == 'S') i = 0;
    else if(c == 'H') i = 1;
    else if(c == 'C') i = 2;
    else  i = 3;
    cards[i][j-1] = 1;
    n--;
  }

  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if(cards[i][j] == 0){
        if(i == 0)  c = 'S';
        else if(i == 1)  c = 'H';
        else if(i == 2)  c = 'C';
        else  c = 'D';
        printf("%c %d\n",c,j+1);
      }
    }
  }
return(0);
}