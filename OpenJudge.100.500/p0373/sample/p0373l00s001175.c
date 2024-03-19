#include <stdio.h>

int main(void){
  int H, W;
  int i, j;


  while ( scanf("%d %d", &H, &W) != EOF){
    if( H == 0){
      if( W == 0){
       
	break;
      }else{
	for(i = 1; i <= H; i++){
	  for (j = 1; j <= W; j++)
	    if((i == 0)||(i == H - 1)||(j == 0)||(j == W -1)){

	    putchar('#');
	    }else{
	      putchar('.');
	    }
	  putchar('\n');
	}
		printf("\n");
      }
    }
    else{
	for(i = 1; i <= H; i++){
	  for (j = 1; j <= W; j++)
	    if((i == 1)||(i == H )||(j == 1)||(j == W )){

	    putchar('#');
	    }else{
	      putchar('.');
	    }
	  putchar('\n');
	}
		printf("\n");
  }
    }
  return 0;
}

