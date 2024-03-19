#include<stdio.h>
int main(){
  while(1){
    int H;
    int W;
    scanf("%d %d", &H, &W);
    if(W == 0 && H == 0)break;
    int h,w;
    for(w = 1 ; w <= W ; w++){
      printf("#");
    }
    printf("\n");
    for(h = 2 ; h < H ; h++){
      printf("#");
      for(w = 2 ; w < W ; w++){
	printf(".");
      }
      printf("#\n");
    }
    for(w = 1 ; w <= W ; w++){
      printf("#");
    }
    printf("\n");
    printf("\n");
  }
  return 0;
}
