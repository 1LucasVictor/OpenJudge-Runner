#include <stdio.h>

int main(){

  int H,W,i,j;

  while(scanf("%d %d",&H,&W),H!=0&&W!=0){

  for(i=0;i<H;i++){
    for(j=0;j<W;j++){
      if(i==0 || i==H-1 || j==0 || j==W-1){
          printf("#");
      }else{
          printf(".");
      }
    }
      printf("\n");
    }
      printf("\n");
    }
  return 0;
}
