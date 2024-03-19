#include <stdio.h>

int main(void){
  int no, i=0, num, j;
  char Fu[] = {'S', 'H', 'C', 'D'};
  int card[4][13] = {0};
  char mj;

  scanf("%d", &no);

  while(i<no){
    scanf("%s %d", &mj, &num);
    Fu[0] = 'S';

    if(mj == Fu[0])
      card[0][num-1] = num;
    if(mj == Fu[1])
      card[1][num-1] = num;
    if(mj == Fu[2])
      card[2][num-1] = num;
    if(mj == Fu[3])
      card[3][num-1] = num;

    i++;
  }

  for(i=0; i<4; i++){
    for(j=0; j<13; j++){
      if(card[i][j] == 0){
        printf("%c %d\n",Fu[i], j+1);
      }
    }
  }

  return 0;
}

