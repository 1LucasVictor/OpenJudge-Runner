#include <stdio.h>
 
int main(void){
    int x,y,h,w;
     
    while(1){
        scanf("%d %d\n",&x,&y);
        if(0 == x && 0 == y){
            break;
        }else{
            for(h = 0; h < x; h++){
                for(w = 0; w < y; w++){
                    if(h == 0 || h == x -1){
                        printf("#");
                    }else{
                        if(w == 0 || w == y - 1){
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
    }
     
    return 0;
}
 