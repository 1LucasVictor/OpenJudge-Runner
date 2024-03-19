#include<stdio.h>


int main(){

  int H, W, i, j, k, l;

  while(1){

  scanf("%d %d", &H, &W);

  if(H == 0 && W == 0)

    break;

  else{

  for(i = 0;i < W;i++){

    printf("#");

  }

  printf("\n");

    for(j = 0;j < H - 2;j++){

      printf("#");

      for(k = 0;k < W - 2;k++){

	printf(".");

      }

      printf("#\n");

    }

    for(l = 0;l < W;l++){

    printf("#");

  }

  printf("\n");

  
  }

  printf("\n");
  
  }

    
  return 0;
  
}