#include <stdio.h>

int main(){
  int i,j,h;
  int H, W;

  for(h=0;;h++){
    scanf("%d %d", &H, &W);
    if(H == 0 && W == 0){
      break;
    }

    for(i=0; i<H; i++){
      for(j=0; j<W; j++){

        if(i == 0 || j == 0){
          printf("#");
        }

        else if(i == H-1 || j == W-1){
          printf("#");
        }

        else if((0 < i && i < H) && (0 < j && j < W-1)){
          printf(".");
        }

      }
    printf("\n");
    }
    printf("\n");
  }

  return 0;

}

