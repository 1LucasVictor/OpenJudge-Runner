#include<stdio.h>

int main(){

   int H, W;
   int i, j;

   scanf("%d %d", &H, &W);

   while(H!=0 || W!=0){
      for(i=0;i<H;i++){
         if(i==0 || i==H-1){
            for(j=0;j<W;j++) printf("#");
         }else{
            for(j=0;j<W;j++){
               if(j==0 || j==W-1) printf("#");
               else printf(".");
            }
         }
         printf("\n");
      }
      printf("\n");
      scanf("%d %d", &H, &W);
   }

   return 0;

}