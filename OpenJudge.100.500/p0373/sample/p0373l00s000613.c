#include <stdio.h>
int main(void){
    
   int i,j,H,W;
   
   while(H!=0 || W!=0){
   scanf("%d %d",&H,&W);
   
for ( i = 1; i <= H; i++ ){
    for ( j = 1; j <= W; j++ ){
        if(i!=1 && i!=H && j!=1 && j!=W){
            printf(".");
        } else {
            printf("#");
        }
    }
    printf("\n");
}
    if(H!=0 || W!=0)
    printf("\n");
}
   return 0;

   }
   
