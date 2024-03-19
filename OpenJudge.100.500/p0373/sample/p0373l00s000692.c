#include<stdio.h>

int main(void){
    while(1){
        int h, w;
        scanf("%d%d", &h, &w);
        if(!h && !w) break;
        for(int i=0; i<h; i++){
            if(i==0 || i==h-1){
                for(int l=0; l<w; l++) printf("#");
                printf("\n");
            }else{
                for(int l=0; l<w; l++){
                    if(l==0 || l==w-1) printf("#");
                    else printf(".");
                }
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
