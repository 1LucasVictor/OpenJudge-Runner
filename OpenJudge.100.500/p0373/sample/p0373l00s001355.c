#include<stdio.h>
int main(void){
  int H,W,a,b,k=0;
  while(k != -1){
  scanf("%d %d",&H,&W);
    if(H==0 && W==0){
      break;
    }
    for(b=1;b<=W;b++){
      printf("#");
    }
    printf("\n");
    for(a=2;a<=H-1;a++){
      printf("#");
      for(b=2;b<=W-1;b++){
        printf(".");
      }
      printf("#\n");
    }
    for(b=1;b<=W;b++){
      printf("#");
    }
    printf("\n\n");
  }
  return 0;
}