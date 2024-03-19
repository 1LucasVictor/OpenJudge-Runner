#include <stdio.h>
 
int main() {
 
  int H ,W,i,j;
 
  while(1) {
    scanf("%d %d",&H, &W);
    if(H == 0 && W == 0) {
      break; 
    }
 
    for (j=1; j<=H; j++) {
      for(i=1; i<=W; i++) {
    if(j == 1 || j == H) {
      printf("#");
    } else if (j !=1 && j !=H && i==1 || i==W) {
      printf("#");
    } else {
      printf(".");
    }
      }
 
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
