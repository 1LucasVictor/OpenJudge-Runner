#include <stdio.h>
 int main(void){
    int i, j,H,W;
    while(scanf("%d %d",&H,&W)!=EOF){
     if(H==0&&W==0){
         break;
     }
     for ( i = 0; i < H; i++ ){
     for ( j = 0; j < W; j++ ){
         if(j==0||j==W-1||i==0||i==H-1){
             printf("#");
         } else {
             printf(".");
         }
     }
     printf("\n");
 }
     printf("\n");
 }
  return(0);// Your code here!
     
 }



