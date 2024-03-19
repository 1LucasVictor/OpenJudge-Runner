#include <stdio.h>

int main(int argc,char *args[]){
    int i,j,h,w;

    while(1){
        scanf("%d %d",&h,&w);
        if(h==0 && w==0) break;
        //first border
        for(i=0;i<w;i++) printf("#");
        printf("\n");

        for(i=0;i<h-2;i++){
            printf("#");
            for(j=0;j<w-2;j++){
                printf(".");
            }
            printf("#\n");
        }

        //last border
        for(i=0;i<w;i++) printf("#");
        printf("\n\n");
    }
    return 0;
}

