#include <stdio.h>


int main (void){
 
 int h=-1 , w=-1 , i , j;
 
 while(1){
     
     scanf("%d %d", &h, &w);
     if(h + w == 0) break;
     
     for(i=0; i < h; i++){
        
        if(i == 0 || i == h - 1){ 
            for(j=0; j < w; j++){
                printf("#"); 
            }
            puts("");
        }else{
            printf("#");
            for(j=0; j < w-2; j++){
                printf(".");
            }
            printf("#");
            puts("");
        }
        
     }
     
     puts("");
 }
 return 0;
 
}
 