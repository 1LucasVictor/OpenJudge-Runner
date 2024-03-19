#include<stdio.h>

int main(void){

  int W,H,x,y,r,U,D,R,L;

  scanf("%d %d %d %d %d", &W,&H,&x,&y,&r);



  U = y + r;
  D = y - r;
  R = x + r;
  L = x - r;

  if(W < U || 0 > D || H < R || 0 > L ){

    printf("No");
  }
  
  else{
    printf("Yes");
  };
    
  
  printf("\n");

  return 0;
  
};