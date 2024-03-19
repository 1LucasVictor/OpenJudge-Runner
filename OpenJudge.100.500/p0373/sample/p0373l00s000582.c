#include<stdio.h>

int main(){
    int height,width,h,w;
    char block;

    for(;;){
        scanf("%d%d",&height,&width);
        if(width == 0 && height == 0)break;

        for(h = 1; h <= height; h++){
            for(w = 1; w <= width; w++){
                if((h != 1 && h != height) && (w != 1 && w != width))block = '.';
                else block = '#';

                printf("%c",block);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

