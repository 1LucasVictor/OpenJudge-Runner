#include<stdio.h>
int main(){
  int i,j,H,W;
  while(1){
    if(H == 0 && W == 0) break;
    scanf("%d %d",&H,&W);
  for(i = 0; i < H; i++){
    for(j = 0; j < W; j++){
      if(i == 0 || i ==(H-1) || j == 0 || j ==(W-1)){
            printf("#");
        } else {
            printf(".");
        }
    }
    printf("\n");
  }
  printf("\n");
}
  return 0;
}
