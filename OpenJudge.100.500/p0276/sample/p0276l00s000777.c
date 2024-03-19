#include <stdio.h>
 
int main(void){
 
  int x, p, i, j, y, h;
  int a[100][100] = {0};
     
  scanf("%d", &x);
   
  for(i = 0; i < x; i++){
    scanf("%d%d", &p, &y);
    for(j = 0; j < y; j++){
      scanf("%d", &h);
      a[p][h] = 1;
    }
  } 

  for(i = 0; i < x; i++){
    for(j = 0; j < x; j++){
      printf("%d%c", a[i+1][j+1], (j == x - 1?'\n':' '));
    }
  }

  return 0;

}