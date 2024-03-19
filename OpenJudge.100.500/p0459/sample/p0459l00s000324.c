#include <stdio.h>
#include <stdlib.h>

int main(void){
  int x, y;
  int i,j;
  scanf("%d %d", &x, &y);
  
  for(i=0;i<=100;i++){
    for(j=0;j<=100;j++){
      if(i+j==x && 2*i+4*j==y){
        printf("Yes");
        goto flag;
      }
    }
  }
  
  printf("No");
  flag:
  
  return 0;
}


