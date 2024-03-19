#include <stdio.h>
int main(){
    int h = 0,
        w = 0,
        i = 0,
        j = 0;
    while(1){
        scanf("%d %d", &h, &w);
        if( h == 0 && w == 0 )break;
            for(i=0;i<h;i++){
                if( i == 0 && i != h){
                    for(j=0;j<w;j++){
                        printf("#");
                    }
                    printf("\n");
                }
                if( i != 0 && i != h-1 ){
                    printf("#");
                    for(j=0;j<w-2;j++){
                        printf(".");
                    }
                    printf("#\n");
                }
                if( i != 0 && i == h-1){
                    for(j=0;j<w;j++){
                        printf("#");
                    }
                    printf("\n");
                }
                
            }
            printf("\n");
    }
    return 0;
}