#include<stdio.h>
 main(){
   int h,w,i,j;
   while(1){
     scanf("%d%d",&h,&w);
     if(h==0 && w==0)
       break;
     for(i=0;i<h;i++){
       if(i>0 && i<h-1){
     for(j=0;j<w;j++){
       if(j>0 && j<w-1){
         printf(".");
       }else{
         printf("#");
       }
     }
       }
else{
     for(j=0;j<w;j++)
       printf("#");
       }
       printf("\n");
     }
     printf("\n");
   }
   return 0;
 } 