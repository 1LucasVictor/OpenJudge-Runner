#include <stdio.h>

int main(){
  int H,W,i,j;
  while(1){
    scanf("%d %d",&H,&W);
    if(H==0 && W==0) break;
    for(j=0; j<H; j++){
      for(i=0; i<W; i++){
	if(i==0 || i==W-1) printf("#");
	else if(j==0 || j==H-1) printf("#");
	else printf(".");
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}