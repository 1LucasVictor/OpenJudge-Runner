#include <stdio.h>

int main(){
int H,W,i,j;
while(1){
scanf("%d %d",&H,&W);
if(H==0&&W==0) break;
for(i=1;i<=H;i++){
   if(i==1||i==H){
      for(j=1;j<=W;j++){
         printf("#");
      }
   }else{
      for(j=1;j<=W;j++){
         if(j==1||j==W){
            printf("#");
         }else{
            printf(".");
         }
      }
   }
   printf("\n");
}
printf("\n");
}
return 0;
}