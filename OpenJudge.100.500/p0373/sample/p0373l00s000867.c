#include <stdio.h>
int main()
{
  int H, W;
  scanf("%d %d", &H, &W);
 
  int a, b;
 
  while(H!=0 || W!=0){
    for(a=0; a<H; a++){
      if(a==0 || a==H-1){
	for(b=0; b<W; b++){
	  printf("#");
	}
      }else{
	for(b=0; b<W; b++){
	  if(b==0 || b==W-1){
	    printf("#");
	  }else{
	    printf(".");
	  }
	}
      }
      printf("\n");
    }
      printf("\n");
      scanf("%d %d", &H, &W);
  }
  return 0;
}