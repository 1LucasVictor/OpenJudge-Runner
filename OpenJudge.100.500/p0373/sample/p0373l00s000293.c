#include <stdio.h>
  
int main(void){
  
  int H,W;
  register int i,s;
  
  while(1){
    scanf("%d %d",&H,&W);
    if((H == 0) & (W == 0)){
      break;
    }
    for(i = 0;i < H;i++){
      for(s = 0;s < W;s++){
        if(  (  (i == 0) | (i ==   (H - 1)  )  ) | (  (  (s == 0) | (s ==   (W - 1)  )  )   ) ){
          printf("#");
        }else{
          printf(".");
        }
      }
    }
  }
  return 0;
}