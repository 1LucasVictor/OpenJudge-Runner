#include<stdio.h>
int main(void)
{
  int h,w,i,j;
  do{
     scanf("%d %d",&h,&w);
     if((h==0)&&(w==0)){
       break;
     }
     for(i=0;i<h;i++){
         if((i==0)||(i==(h-1))){
            for(j=0;j<w;j++){
                printf("#");
            }
            printf("\n");
         }else{
            for(j=0;j<w;j++){
              if((j==0)||(j==(w-1))){
                printf("#");
              }else{
                printf(".");
              }
            }
            printf("\n");
         }
      }
   }while(1);
   return 0;
}
         
